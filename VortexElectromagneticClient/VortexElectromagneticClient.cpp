#include "VortexElectromagneticClient.h"

VortexElectromagneticClient::VortexElectromagneticClient(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	TcpSocketList = new QTcpSocket[NUMBEROFTRANSMITTER];
}
void VortexElectromagneticClient::Open1_onClicked()
{
	QString fileFilter = "all files(*.*);;text(*.txt)";
	FileName1 = QFileDialog::getOpenFileName(this, "打开文件", "", fileFilter);
	if (FileName1 == QString(""))
	{
		QMessageBox::information(this, "未打开任何文件", "未打开文件，请选择文件！", QMessageBox::Ok, QMessageBox::Cancel);
		return;
	}
	//ui.lineEdit->setText(FileName1);
}

void VortexElectromagneticClient::Open2_onClicked()
{
	QString fileFilter = "all files(*.*);;text(*.txt)";
	FileName2 = QFileDialog::getOpenFileName(this, "打开文件", "", fileFilter);
	if (FileName2 == QString(""))
	{
		QMessageBox::information(this, "未打开任何文件", "未打开文件，请选择文件！", QMessageBox::Ok, QMessageBox::Cancel);
		return;
	}
	//ui.lineEdit_2->setText(FileName2);
}

void VortexElectromagneticClient::Open3_onClicked()
{
	QString fileFilter = "all files(*.*);;text(*.txt)";
	FileName3 = QFileDialog::getOpenFileName(this, "打开文件", "", fileFilter);
	if (FileName3 == QString(""))
	{
		QMessageBox::information(this, "未打开任何文件", "未打开文件，请选择文件！", QMessageBox::Ok, QMessageBox::Cancel);
		return;
	}
	//ui.lineEdit_3->setText(FileName3);
}

void VortexElectromagneticClient::Open4_onClicked()
{
	QString fileFilter = "all files(*.*);;text(*.txt)";
	FileName4 = QFileDialog::getOpenFileName(this, "打开文件", "", fileFilter);
	if (FileName4 == QString(""))
	{
		QMessageBox::information(this, "未打开任何文件", "未打开文件，请选择文件！", QMessageBox::Ok, QMessageBox::Cancel);
		return;
	}
	//ui.lineEdit_4->setText(FileName4);
}

void VortexElectromagneticClient::Transmit()
{

}