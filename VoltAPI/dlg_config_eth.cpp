#include <QDebug>
#include <QMessageBox>
#include "dlg_config_eth.h"
#include "ui_dlg_config_eth.h"

dlg_config_eth::dlg_config_eth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlg_config_eth)
{
    ui->setupUi(this);

}

dlg_config_eth::~dlg_config_eth()
{
    delete ui;
}

void dlg_config_eth::on_btnsalvar_clicked()
{
    if(ui->txthost->text().isEmpty())
    {
        QMessageBox::information(this,"Validação de Dados","Verificar o campo Host!");
        ui->txthost->setFocus();
        return;
    }

    if(ui->txtip->text().isEmpty())
    {
        QMessageBox::information(this,"Validação de Dados","Verificar o campo IP!");
        ui->txtip->setFocus();
        return;
    }

    if(ui->txtmask->text().isEmpty())
    {
        QMessageBox::information(this,"Validação de Dados","Verificar o campo Máscara Subrede!");
        ui->txtmask->setFocus();
        return;
    }

    if(ui->txtgtw->text().isEmpty())
    {
        QMessageBox::information(this,"Validação de Dados","Verificar o campo Gateway!");
        ui->txtgtw->setFocus();
        return;
    }

    if(ui->txtdns1->text().isEmpty())
    {
        QMessageBox::information(this,"Validação de Dados","Verificar o campo DNS Primário!");
        ui->txtdns1->setFocus();
        return;
    }

    if(ui->txtdns2->text().isEmpty())
    {
        QMessageBox::information(this,"Validação de Dados","Verificar o campo DNS Primário!");
        ui->txtdns2->setFocus();
        return;
    }

    QUrl urlrequest;
    urlrequest.setUrl("http://192.168.0.52/config.htm");

    QNetworkRequest request(urlrequest);
    request.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");
    request.setRawHeader("Authorization", "Basic " + QByteArray(QString("%1:%2").arg("admin").arg("voltvolt").toLatin1()).toBase64());

    QByteArray postdata;
    QUrlQuery params;

    /*params.addQueryItem("dhcp","false");
    params.addQueryItem("mac",ui->txtmac->text());
    params.addQueryItem("host",ui->txthost->text());
    params.addQueryItem("ip",ui->txtip->text());
    params.addQueryItem("gw",ui->txtgtw->text());
    params.addQueryItem("sub",ui->txtmask->text());
    params.addQueryItem("dns1",ui->txtdns1->text());
    params.addQueryItem("dns2",ui->txtdns2->text());*/

    postdata.append("dhcp=false&");
    postdata.append(tr("mac=%1&").arg(ui->txtmac->text()));
    postdata.append(tr("host=%1&").arg(ui->txthost->text()));
    postdata.append(tr("ip=%1&").arg(ui->txtip->text()));
    postdata.append(tr("gw=%1&").arg(ui->txtgtw->text()));
    postdata.append(tr("sub=%1&").arg(ui->txtmask->text()));
    postdata.append(tr("dns1=%1&").arg(ui->txtdns1->text()));
    postdata.append(tr("dns2=%1").arg(ui->txtdns2->text()));

    nam = new QNetworkAccessManager(this);

    connect(nam,SIGNAL(finished(QNetworkReply*)), this,SLOT(replayFinished(QNetworkReply*)));

    //postdata = params.toString(QUrl::FullyEncoded).toUtf8();

    //nam->post(request,postdata);
    nam->post(request,postdata);
}

void dlg_config_eth::replayFinished(QNetworkReply *reply)
{
    if(reply->error())
        {
            qDebug() << "ERROR!";
            qDebug() << reply->errorString();
        }
        else
        {
            if(reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt() == 302)
            {
                DoReset();
            }

        }

        reply->deleteLater();
}

void dlg_config_eth::setJsondoc(const QJsonDocument value)
{
    jsondoc = value;

    GetEthInfo();
}

void dlg_config_eth::GetEthInfo()
{
    ui->txthost->setText(jsondoc["devhost"].toString().trimmed());
    ui->txtmac->setText(jsondoc["devmac"].toString());
    ui->txtip->setText(jsondoc["devip"].toString());
    ui->txtmask->setText(jsondoc["devmask"].toString());
    ui->txtgtw->setText(jsondoc["devgtw"].toString());
    ui->txtdns1->setText(jsondoc["devdns1"].toString());
    ui->txtdns2->setText(jsondoc["devdns2"].toString());

}

void dlg_config_eth::DoReset()
{
    QUrl urlrequest;
    urlrequest.setUrl("http://192.168.0.52/reset.cgi?timeout=1");

    QNetworkRequest request(urlrequest);
    request.setHeader(QNetworkRequest::ContentTypeHeader,"text/html");
    request.setRawHeader("Authorization", "Basic " + QByteArray(QString("%1:%2").arg("admin").arg("voltvolt").toLatin1()).toBase64());

    QNetworkAccessManager manager;

    QNetworkReply *reply = manager.get(request);


    while(!reply->isFinished()){
        qApp->processEvents();

    }

    qDebug() << "Retorno.: " << reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();


    reply->deleteLater();

    this->accept();

}
