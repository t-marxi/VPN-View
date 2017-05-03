#ifndef LOGWIDGET_H
#define LOGWIDGET_H

#include <QWidget>

class QPushButton;

class LogWidget : public QWidget
{
	Q_OBJECT

public:
	explicit LogWidget(QWidget *parent = 0);
	virtual ~LogWidget();

public slots:
	void showLogin();
	void showLogout();

private:
	QWidget * createButton(QString name, QString text, QPushButton * btn);
	QPushButton * loginBtn;
	QWidget * loginWidget;
	QPushButton * logoutBtn;
	QWidget * logoutWidget;
};

#endif // LOGWIDGET_H
