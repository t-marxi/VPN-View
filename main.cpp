#include "mainwindow.h"
#include <QApplication>
#include "QFile"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// Add styles
	QFile styleF;
	styleF.setFileName(":/styles/resources/css/style_btn.css");
	styleF.open(QFile::ReadOnly);
	QString qssStr = styleF.readAll();
	qApp->setStyleSheet(qssStr);

	MainWindow w;
	w.show();



	return a.exec();
}
