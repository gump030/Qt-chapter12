#include "Threaddlg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Threaddlg w;
	w.show();
	return a.exec();
}
