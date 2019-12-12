#include <QDebug>
#include <QMessageBox>
#include "dlgconfig_tomada.h"
#include "ui_dlgconfig_tomada.h"

dlgconfig_tomada::dlgconfig_tomada(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgconfig_tomada)
{
    ui->setupUi(this);
}

dlgconfig_tomada::~dlgconfig_tomada()
{
    delete ui;
}

void dlgconfig_tomada::setJsondoc(const QJsonDocument value)
{
    jsondoc = value;

    int nports = jsondoc["nportas"].toString().toInt();

    qDebug() << tr("Número de Portas.: %1").arg(nports);

    ui->cbotomada->clear();

    for(int i = 0; i < nports; i++)
    {
        ui->cbotomada->addItem(tr("%1").arg(i+1));
    }

}

void dlgconfig_tomada::getPortInfo(int _port)
{
    ui->chktomada->setChecked((jsondoc[tr("rmac%1").arg(_port + 1)].toString() == "true")?true:false);
    ui->txttomada->setText(jsondoc[tr("nt%1").arg(_port + 1)].toString());

}

void dlgconfig_tomada::on_btn_salvar_clicked()
{
    if((ui->txttomada->text().length() == 0) || (ui->txttomada->text().isEmpty()))
    {
        QMessageBox::information(this,"Validação de Dados","Verificar o campo Identificação!");
        return;
    }

    QUrl urlrequest;
    urlrequest.setUrl(tr("http://192.168.0.52/output.htm?porta=%1&rmac=%2&nt=%3").arg(ui->cbotomada->currentText()).arg(ui->chktomada->isChecked()?"true":"false").arg(ui->txttomada->text()));

    QNetworkRequest request(urlrequest);
    request.setHeader(QNetworkRequest::ContentTypeHeader,"text/html");
    request.setRawHeader("Authorization", "Basic " + QByteArray(QString("%1:%2").arg("admin").arg("voltvolt").toLatin1()).toBase64());

    QNetworkAccessManager nam;

    QNetworkReply *reply = nam.get(request);


    while(!reply->isFinished()){
        qApp->processEvents();

    }

    reply->deleteLater();

    this->accept();

}

void dlgconfig_tomada::on_cbotomada_currentIndexChanged(int index)
{
    getPortInfo(index);
}
