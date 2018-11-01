#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VortexElectromagneticClient.h"
#include<qfile.h>
#include<qmessagebox.h>
#include<qfiledialog.h>
#include<qtcpsocket.h>
#define TCPADDR "192.168.102.1"
#define TCPPORT "8080"
#define NUMBEROFTRANSMITTER 4

class VortexElectromagneticClient : public QMainWindow
{
	Q_OBJECT

public:
	VortexElectromagneticClient(QWidget *parent = Q_NULLPTR);

private:
	Ui::VortexElectromagneticClientClass ui;
	QString FileName1;
	QString FileName2;
	QString FileName3;
	QString FileName4;
	QTcpSocket* TcpSocketList;
public slots:
	void Open1_onClicked();
	void Open2_onClicked();
	void Open3_onClicked();
	void Open4_onClicked();
	void Transmit();
};
