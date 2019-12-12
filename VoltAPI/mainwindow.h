#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qmessagebox.h>
#include <QDebug>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QUrl>
#include <QUrlQuery>
#include <QByteArray>
#include <QJsonDocument>
#include <QTimer>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>


using namespace QtCharts;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    virtual void closeEvent(QCloseEvent *event);

void GetEthInfo(void);
void GetPortInfo(void);

void SetPortStatus(int _porta,int _reboot);

void HabilitarPortas(int _tomada);
void CreateChart(void);
void UpdateGrafico(void);
void UpdateSensors(void);


private slots:
    void GetJsonInfoFromDevice(void);

    void on_btnt1_clicked();

    void on_btnt2_clicked();

    void on_btnt3_clicked();

    void on_btnt4_clicked();

    void on_btnt5_clicked();

    void on_btnt6_clicked();

    void on_btnt7_clicked();

    void on_btnt8_clicked();

    void on_btnt9_clicked();

    void on_btnt10_clicked();

    void on_btnhab_all_clicked();

    void on_btndesab_all_clicked();

    void on_btn_config_tomada_clicked();

    void on_pushButton_2_clicked();

    void on_btn_config_eth_clicked();

private:
    Ui::MainWindow *ui;
    QJsonDocument m_json;
    QTimer *m_tmrJason;
    QLineSeries *m_series;
    QChart *m_chart;
    QChartView *m_chartview;
    int m_cnt;

};
#endif // MAINWINDOW_H
