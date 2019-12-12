#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dlgconfig_tomada.h"
#include "dlg_config_eth.h"

#include <QByteArray>
#include <QUrl>
#include <QUrlQuery>
#include <QDesktopWidget>
#include <QGuiApplication>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("API Volt Example");


    m_cnt = 0;
    m_tmrJason = new QTimer(this);
    m_tmrJason->setInterval(1000);
    connect(m_tmrJason,SIGNAL(timeout()),this,SLOT(GetJsonInfoFromDevice()));
    m_tmrJason->start();

    CreateChart();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    m_tmrJason->stop();
    m_chartview->close();
    m_chart->close();
    m_series->clear();

    event->accept();
}

void MainWindow::GetJsonInfoFromDevice(void)
{
    QNetworkRequest request(QUrl("http://192.168.0.52/status.json"));
    request.setHeader(QNetworkRequest::ContentTypeHeader,"application/json");
    request.setRawHeader("Authorization", "Basic " + QByteArray(QString("%1:%2").arg("admin").arg("voltvolt").toLatin1()).toBase64());

    QNetworkAccessManager nam;

    QNetworkReply *reply = nam.get(request);

    while(!reply->isFinished()){
        qApp->processEvents();

    }

    QByteArray response_data = reply->readAll();

    m_json = QJsonDocument::fromJson(response_data);

    reply->deleteLater();

    GetEthInfo();
    GetPortInfo();
    UpdateGrafico();
    UpdateSensors();

}


void MainWindow::GetEthInfo(void)
{
    QTableWidgetItem* Item[2];

    ui->tbeth->clear();
    ui->tbeth->setColumnCount(2);
    ui->tbeth->setColumnWidth(0,200);
    ui->tbeth->setColumnWidth(1,150);
    ui->tbeth->verticalHeader()->hide();
    ui->tbeth->horizontalHeader()->hide();
    ui->tbeth->setRowCount(0);

    //Host
    ui->tbeth->insertRow(0);

    Item[0] = new QTableWidgetItem;
    Item[0]->setText("Host");
    ui->tbeth->setItem(0,0,Item[0]);

    Item[1] = new QTableWidgetItem;
    Item[1]->setText(m_json["devhost"].toString());
    ui->tbeth->setItem(0,1,Item[1]);

    //MAC
    ui->tbeth->insertRow(1);

    Item[0] = new QTableWidgetItem;
    Item[0]->setText("MAC Addres");
    ui->tbeth->setItem(1,0,Item[0]);

    Item[1] = new QTableWidgetItem;
    Item[1]->setText(m_json["devmac"].toString());
    ui->tbeth->setItem(1,1,Item[1]);

    //IP
    ui->tbeth->insertRow(2);

    Item[0] = new QTableWidgetItem;
    Item[0]->setText("IP");
    ui->tbeth->setItem(2,0,Item[0]);

    Item[1] = new QTableWidgetItem;
    Item[1]->setText(m_json["devip"].toString());
    ui->tbeth->setItem(2,1,Item[1]);

    //MASK
    ui->tbeth->insertRow(3);

    Item[0] = new QTableWidgetItem;
    Item[0]->setText("Mascara de Subrede");
    ui->tbeth->setItem(3,0,Item[0]);

    Item[1] = new QTableWidgetItem;
    Item[1]->setText(m_json["devmask"].toString());
    ui->tbeth->setItem(3,1,Item[1]);

    //Gateway
    ui->tbeth->insertRow(4);

    Item[0] = new QTableWidgetItem;
    Item[0]->setText("Gateway");
    ui->tbeth->setItem(4,0,Item[0]);

    Item[1] = new QTableWidgetItem;
    Item[1]->setText(m_json["devgtw"].toString());
    ui->tbeth->setItem(4,1,Item[1]);

    //DNS1
    ui->tbeth->insertRow(5);

    Item[0] = new QTableWidgetItem;
    Item[0]->setText("DNS Primário");
    ui->tbeth->setItem(5,0,Item[0]);

    Item[1] = new QTableWidgetItem;
    Item[1]->setText(m_json["devdns1"].toString());
    ui->tbeth->setItem(5,1,Item[1]);

    //DNS2
    ui->tbeth->insertRow(6);

    Item[0] = new QTableWidgetItem;
    Item[0]->setText("DNS Secundário");
    ui->tbeth->setItem(6,0,Item[0]);

    Item[1] = new QTableWidgetItem;
    Item[1]->setText(m_json["devdns2"].toString());
    ui->tbeth->setItem(6,1,Item[1]);
}

void MainWindow::GetPortInfo(void)
{

    ui->btnt2->setText(m_json["nt2"].toString());
    ui->btnt3->setText(m_json["nt3"].toString());
    ui->btnt4->setText(m_json["nt4"].toString());
    ui->btnt5->setText(m_json["nt5"].toString());
    ui->btnt6->setText(m_json["nt6"].toString());
    ui->btnt7->setText(m_json["nt7"].toString());
    ui->btnt8->setText(m_json["nt8"].toString());
    ui->btnt9->setText(m_json["nt9"].toString());
    ui->btnt10->setText(m_json["nt10"].toString());

    QString strbtn = "";
    QIcon icoen = (QPixmap(":/ICONS/PDISABLED"));
    QIcon icopg = (QPixmap(":/ICONS/PGREEN"));
    QIcon icopr = (QPixmap(":/ICONS/PRED"));

    //BTN1
    if(m_json["rmac1"].toString() == "true")
    {
        ui->btnt1->setEnabled(true);

        if(m_json["ac0"].toString() == "0")
        {
            strbtn = "Ligada";
            ui->btnt1->setIcon(icopg);

        }else{

            strbtn = "Desligada";
            ui->btnt1->setIcon(icopr);
        }

    }else{
        ui->btnt1->setEnabled(false);
        strbtn = "Desabilitada";
        ui->btnt1->setIcon(icoen);
    }
    ui->btnt1->setText(tr("%1\n%2").arg(m_json["nt1"].toString()).arg(strbtn));

    //BTN2
    if(m_json["rmac2"].toString() == "true")
    {
        ui->btnt2->setEnabled(true);

        if(m_json["ac1"].toString() == "0")
        {
            strbtn = "Ligada";
            ui->btnt2->setIcon(icopg);

        }else{

            strbtn = "Desligada";
            ui->btnt2->setIcon(icopr);
        }

    }else{
        ui->btnt2->setEnabled(false);
        strbtn = "Desabilitada";
        ui->btnt2->setIcon(icoen);
    }
    ui->btnt2->setText(tr("%1\n%2").arg(m_json["nt2"].toString()).arg(strbtn));

    //BTN3
    if(m_json["rmac3"].toString() == "true")
    {
        ui->btnt3->setEnabled(true);

        if(m_json["ac2"].toString() == "0")
        {
            strbtn = "Ligada";
            ui->btnt3->setIcon(icopg);

        }else{

            strbtn = "Desligada";
            ui->btnt3->setIcon(icopr);
        }

    }else{
        ui->btnt3->setEnabled(false);
        strbtn = "Desabilitada";
        ui->btnt3->setIcon(icoen);
    }
    ui->btnt3->setText(tr("%1\n%2").arg(m_json["nt3"].toString()).arg(strbtn));

    //BTN4
    if(m_json["rmac4"].toString() == "true")
    {
        ui->btnt4->setEnabled(true);

        if(m_json["ac3"].toString() == "0")
        {
            strbtn = "Ligada";
            ui->btnt4->setIcon(icopg);

        }else{

            strbtn = "Desligada";
            ui->btnt4->setIcon(icopr);
        }

    }else{
        ui->btnt4->setEnabled(false);
        strbtn = "Desabilitada";
        ui->btnt4->setIcon(icoen);
    }
    ui->btnt4->setText(tr("%1\n%2").arg(m_json["nt4"].toString()).arg(strbtn));

    //BTN5
    if(m_json["rmac5"].toString() == "true")
    {
        ui->btnt5->setEnabled(true);

        if(m_json["ac4"].toString() == "0")
        {
            strbtn = "Ligada";
            ui->btnt5->setIcon(icopg);

        }else{

            strbtn = "Desligada";
            ui->btnt5->setIcon(icopr);
        }

    }else{
        ui->btnt5->setEnabled(false);
        strbtn = "Desabilitada";
        ui->btnt5->setIcon(icoen);
    }
    ui->btnt5->setText(tr("%1\n%2").arg(m_json["nt5"].toString()).arg(strbtn));

    //BTN6
    if(m_json["rmac6"].toString() == "true")
    {
        ui->btnt6->setEnabled(true);

        if(m_json["ac5"].toString() == "0")
        {
            strbtn = "Ligada";
            ui->btnt6->setIcon(icopg);

        }else{

            strbtn = "Desligada";
            ui->btnt6->setIcon(icopr);
        }

    }else{
        ui->btnt6->setEnabled(false);
        strbtn = "Desabilitada";
        ui->btnt6->setIcon(icoen);
    }
    ui->btnt6->setText(tr("%1\n%2").arg(m_json["nt6"].toString()).arg(strbtn));

    //BTN7
    if(m_json["rmac7"].toString() == "true")
    {
        ui->btnt7->setEnabled(true);

        if(m_json["ac6"].toString() == "0")
        {
            strbtn = "Ligada";
            ui->btnt7->setIcon(icopg);

        }else{

            strbtn = "Desligada";
            ui->btnt7->setIcon(icopr);
        }

    }else{
        ui->btnt7->setEnabled(false);
        strbtn = "Desabilitada";
        ui->btnt7->setIcon(icoen);
    }
    ui->btnt7->setText(tr("%1\n%2").arg(m_json["nt7"].toString()).arg(strbtn));

    //BTN8
    if(m_json["rmac8"].toString() == "true")
    {
        ui->btnt8->setEnabled(true);

        if(m_json["ac7"].toString() == "0")
        {
            strbtn = "Ligada";
            ui->btnt8->setIcon(icopg);

        }else{

            strbtn = "Desligada";
            ui->btnt8->setIcon(icopr);
        }

    }else{
        ui->btnt8->setEnabled(false);
        strbtn = "Desabilitada";
        ui->btnt8->setIcon(icoen);
    }
    ui->btnt8->setText(tr("%1\n%2").arg(m_json["nt8"].toString()).arg(strbtn));

    //BTN9
    if(m_json["rmac9"].toString() == "true")
    {
        ui->btnt9->setEnabled(true);

        if(m_json["ac8"].toString() == "0")
        {
            strbtn = "Ligada";
            ui->btnt9->setIcon(icopg);

        }else{

            strbtn = "Desligada";
            ui->btnt9->setIcon(icopr);
        }

    }else{
        ui->btnt9->setEnabled(false);
        strbtn = "Desabilitada";
        ui->btnt9->setIcon(icoen);
    }
    ui->btnt9->setText(tr("%1\n%2").arg(m_json["nt9"].toString()).arg(strbtn));

    //BTN10
    if(m_json["rmac10"].toString() == "true")
    {
        ui->btnt10->setEnabled(true);

        if(m_json["ac9"].toString() == "0")
        {
            strbtn = "Ligada";
            ui->btnt10->setIcon(icopg);

        }else{

            strbtn = "Desligada";
            ui->btnt10->setIcon(icopr);
        }

    }else{
        ui->btnt10->setEnabled(false);
        strbtn = "Desabilitada";
        ui->btnt10->setIcon(icoen);
    }
    ui->btnt10->setText(tr("%1\n%2").arg(m_json["nt10"].toString()).arg(strbtn));




}

void MainWindow::SetPortStatus(int _porta,int _reboot)
{
    int pstatus = (m_json[tr("ac%1").arg(_porta-1)].toString() == "1")? 1 : 0;

    QNetworkRequest request(QUrl(tr("http://192.168.0.52/outpoe.cgi?poe=%1&sts=%2&pr=%3").arg(_porta).arg(pstatus).arg(_reboot)));
    request.setHeader(QNetworkRequest::ContentTypeHeader,"text/html");
    request.setRawHeader("Authorization", "Basic " + QByteArray(QString("%1:%2").arg("admin").arg("voltvolt").toLatin1()).toBase64());

    QNetworkAccessManager nam;

    QNetworkReply *reply = nam.get(request);


    while(!reply->isFinished()){
        qApp->processEvents();

    }

    reply->deleteLater();
}

void MainWindow::HabilitarPortas(int _tomada)
{
    QUrl urlrequest;
    urlrequest.setUrl(tr("http://192.168.0.52/outpoe.cgi?poe=%1&sts=%2&pr=%3").arg(_tomada).arg(0).arg(0));

    QNetworkRequest request(urlrequest);
    request.setHeader(QNetworkRequest::ContentTypeHeader,"text/html");
    request.setRawHeader("Authorization", "Basic " + QByteArray(QString("%1:%2").arg("admin").arg("voltvolt").toLatin1()).toBase64());

    QNetworkAccessManager nam;

    QNetworkReply *reply = nam.get(request);


    while(!reply->isFinished()){
        qApp->processEvents();

    }

    reply->deleteLater();

}

void MainWindow::CreateChart()
{
    m_series = new QLineSeries();

    m_series->append(0, 0);

    m_chart = new QChart();
    m_chart->legend()->hide();
    m_chart->addSeries(m_series);
    m_chart->createDefaultAxes();
    m_chart->setTitle("Gráfico de Temperatura");

    m_chartview = new QChartView(m_chart);
    m_chartview->setRenderHint(QPainter::Antialiasing);
    ui->grid2->addWidget(m_chartview,0,0);
}

void MainWindow::UpdateGrafico()
{
    if(m_cnt < 114){
        m_cnt++;
    }else{
        m_cnt = 1;
    }
    int vtemp = m_json["temp"].toString().toInt();

    m_series->append(m_cnt, vtemp);

    m_chart = new QChart();
    m_chart->legend()->hide();
    m_chart->addSeries(m_series);
    m_chart->createDefaultAxes();
    m_chart->setTitle("Gráfico de Temperatura");

    m_chartview = new QChartView(m_chart);
    m_chartview->setRenderHint(QPainter::Antialiasing);
    ui->grid2->addWidget(m_chartview,0,0);

}

void MainWindow::UpdateSensors()
{
    QString strup = tr("%1d - %2%3:%4%5").arg(m_json["updia"].toString()).arg((m_json["uphora"].toString().toInt() < 10)?"0":"").arg(m_json["uphora"].toString()).arg((m_json["upmin"].toString().toInt() < 10)?"0":"").arg(m_json["upmin"].toString());
    ui->lbluptime->setText(strup);
    ui->lbltemperatura->setText(tr("%1°C").arg(m_json["temp"].toString()));

    ui->lblcalendario->setText(tr("%1/%2/%3").arg(m_json["rtc_days"].toString()).arg(m_json["rtc_months"].toString()).arg(m_json["rtc_years"].toString()));
    ui->lblrelogio->setText(tr("%1:%2:%3").arg(m_json["rtc_hours"].toString()).arg(m_json["rtc_minutes"].toString()).arg(m_json["rtc_seconds"].toString()));
}



void MainWindow::on_btnt1_clicked()
{
    int ret = (ui->chkreboot->isChecked()?1:0);

    SetPortStatus(1,ret);
}

void MainWindow::on_btnt2_clicked()
{
    int ret = (ui->chkreboot->isChecked()?1:0);

    SetPortStatus(2,ret);
}

void MainWindow::on_btnt3_clicked()
{
    int ret = (ui->chkreboot->isChecked()?1:0);

    SetPortStatus(3,ret);
}

void MainWindow::on_btnt4_clicked()
{
    int ret = (ui->chkreboot->isChecked()?1:0);

    SetPortStatus(4,ret);
}

void MainWindow::on_btnt5_clicked()
{
    int ret = (ui->chkreboot->isChecked()?1:0);

    SetPortStatus(5,ret);
}

void MainWindow::on_btnt6_clicked()
{
    int ret = (ui->chkreboot->isChecked()?1:0);

    SetPortStatus(6,ret);
}

void MainWindow::on_btnt7_clicked()
{
    int ret = (ui->chkreboot->isChecked()?1:0);

    SetPortStatus(7,ret);
}

void MainWindow::on_btnt8_clicked()
{
    int ret = (ui->chkreboot->isChecked()?1:0);

    SetPortStatus(8,ret);
}

void MainWindow::on_btnt9_clicked()
{
    int ret = (ui->chkreboot->isChecked()?1:0);

    SetPortStatus(9,ret);
}

void MainWindow::on_btnt10_clicked()
{
    int ret = (ui->chkreboot->isChecked()?1:0);

    SetPortStatus(10,ret);
}

void MainWindow::on_btnhab_all_clicked()
{
    HabilitarPortas(12);
}

void MainWindow::on_btndesab_all_clicked()
{
    HabilitarPortas(13);
}

void MainWindow::on_btn_config_tomada_clicked()
{
    dlgconfig_tomada dlg(this);
    dlg.setJsondoc(m_json);
    dlg.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    m_series = new QLineSeries();

    m_series->append(2, 0);

    m_chart = new QChart();
    m_chart->legend()->hide();
    m_chart->addSeries(m_series);
    m_chart->createDefaultAxes();
    m_chart->setTitle("Teste Chart");

    m_chartview = new QChartView(m_chart);
    m_chartview->setRenderHint(QPainter::Antialiasing);
    ui->grid2->addWidget(m_chartview,0,0);

}

void MainWindow::on_btn_config_eth_clicked()
{
    dlg_config_eth dlg(this);
    dlg.setJsondoc(m_json);
    dlg.exec();
}
