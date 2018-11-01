#include "VortexElectromagneticClient.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VortexElectromagneticClient w;
	w.show();
	return a.exec();
}
