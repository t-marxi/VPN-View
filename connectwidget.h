#ifndef CONNECTWIDGET_H
#define CONNECTWIDGET_H

#include <QWidget>

class QPushButton;

class ConnectWidget : public QWidget
{
	Q_OBJECT
public:
	explicit ConnectWidget(QWidget *parent = 0);

signals:

public slots:
	void showQuickConnect();
	void showDisconnect();

private:
	QPushButton * quickConnectBtn;
	QPushButton * disconnectBtn;
};

#endif // CONNECTWIDGET_H
