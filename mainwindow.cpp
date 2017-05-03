#include "mainwindow.h"
#include <QLayout>
#include <QPushButton>
#include <QLabel>
#include "logwidget.h"
#include "connectwidget.h"


MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent)
{
	init();
}

void MainWindow::init() {
	this->setWindowIcon(QPixmap(":/assets/resources/Assets/Logo.png"));

	QVBoxLayout * layout = new QVBoxLayout;

	layout->addWidget(new LogWidget);

	QWidget * labelWidget = new QWidget;
	labelWidget->setObjectName("labelWidget");
	layout->addWidget(labelWidget, 1, Qt::AlignCenter);


	layout->addWidget(new ConnectWidget, 2, Qt::AlignCenter);

	QWidget * widget = new QWidget(this);
	widget->setLayout(layout);
	setCentralWidget(widget);
}

MainWindow::~MainWindow()
{

}
