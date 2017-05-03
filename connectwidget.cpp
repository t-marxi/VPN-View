#include "connectwidget.h"
#include <QPushButton>
#include <QLayout>
#include "labelbutton.h"

ConnectWidget::ConnectWidget(QWidget *parent) : QWidget(parent)
{
	QHBoxLayout * layout = new QHBoxLayout;
	quickConnectBtn = new QPushButton(tr("QUICK CONNECT"));
	quickConnectBtn->setObjectName("quickConnectBtn");
	QPushButton * quickConnectLabelBtn = new QPushButton;
	quickConnectLabelBtn->setObjectName("quickConnectLabelBtn");
	quickConnectBtn = new LabelButton(quickConnectBtn, quickConnectLabelBtn);
	quickConnectBtn->setObjectName("quickConnectLblBtn");
	layout->addWidget(quickConnectBtn, 0, 0);

	disconnectBtn = new QPushButton(tr("DISCONNECT"));
	disconnectBtn->setObjectName("disconnectBtn");
	QPushButton * disconnectLabelBtn = new QPushButton;
	disconnectLabelBtn->setObjectName("disconnectLabelBtn");
	disconnectBtn = new LabelButton(disconnectBtn, disconnectLabelBtn);
	disconnectBtn->setObjectName("disconnectLblBtn");
	layout->addWidget(disconnectBtn, 0, 0);

	// Set start value.
	showQuickConnect();

	setLayout(layout);

	connect(quickConnectBtn, SIGNAL(clicked(bool)), this, SLOT(showDisconnect()));
	connect(disconnectBtn, SIGNAL(clicked(bool)), this, SLOT(showQuickConnect()));
}

void ConnectWidget::showQuickConnect() {
	disconnectBtn->setHidden(true);
	quickConnectBtn->setHidden(false);
}

void ConnectWidget::showDisconnect() {
	quickConnectBtn->setHidden(true);
	disconnectBtn->setHidden(false);
}
