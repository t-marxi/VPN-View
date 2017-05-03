#include "logwidget.h"
#include <QLayout>
#include <QPushButton>
#include <QLabel>

LogWidget::LogWidget(QWidget *parent) :
	QWidget(parent)
{
	QHBoxLayout * layout = new QHBoxLayout;
	loginBtn = new QPushButton;
	loginWidget = createButton("login", tr("Login"), loginBtn);
	loginWidget->setObjectName("loginWidget");
	layout->addWidget(loginWidget, 0, Qt::AlignRight);
	logoutBtn = new QPushButton;
	logoutWidget = createButton("logout", tr("Logout"), logoutBtn);
	logoutWidget->setObjectName("logoutWidget");
	logoutWidget->setHidden(true);
	layout->addWidget(logoutWidget, 0, Qt::AlignRight);
	setLayout(layout);
	connect(loginBtn, SIGNAL(clicked(bool)), this, SLOT(showLogout()));
	connect(logoutBtn, SIGNAL(clicked(bool)), this, SLOT(showLogin()));
}

LogWidget::~LogWidget()
{

}

void LogWidget::showLogin() {
	logoutWidget->setHidden(true);
	loginWidget->setHidden(false);
}

void LogWidget::showLogout() {
	loginWidget->setHidden(true);
	logoutWidget->setHidden(false);
}

QWidget * LogWidget::createButton(QString name, QString text, QPushButton * btn)
{
	QLabel * label = new QLabel;
	label->setText(text);
	label->setObjectName(name + "Label");
	btn->setObjectName(name + "Btn");

	QHBoxLayout * layout = new QHBoxLayout;
	layout->addWidget(label, 0, Qt::AlignRight);
	layout->addWidget(btn, 0, Qt::AlignLeft);
	QWidget * widget = new QWidget;
	widget->setLayout(layout);
	return widget;
}


