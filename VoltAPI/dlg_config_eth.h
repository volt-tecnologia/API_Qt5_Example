#ifndef DLG_CONFIG_ETH_H
#define DLG_CONFIG_ETH_H

#include <QDialog>
#include <QJsonDocument>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QByteArray>
#include <QUrl>
#include <QUrlQuery>

namespace Ui {
class dlg_config_eth;
}

class dlg_config_eth : public QDialog
{
    Q_OBJECT

public:
    explicit dlg_config_eth(QWidget *parent = nullptr);
    ~dlg_config_eth();

    void setJsondoc(const QJsonDocument value);

private:
    void GetEthInfo(void);
    void DoReset(void);

private slots:
    void on_btnsalvar_clicked();

public slots:
    void replayFinished(QNetworkReply * reply);

private:
    Ui::dlg_config_eth *ui;
    QJsonDocument jsondoc;
     QNetworkAccessManager *nam;
};

#endif // DLG_CONFIG_ETH_H
