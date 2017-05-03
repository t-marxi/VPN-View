#include "labelbutton.h"

LabelButton::LabelButton(QPushButton * p_main, QPushButton * p_label)
{
	main = p_main;
	label = p_label;
	label->setParent(this);
	main->setParent(this);
	connect(main, SIGNAL(clicked(bool)), this, SIGNAL(clicked(bool)));
	connect(label, SIGNAL(clicked(bool)), this, SIGNAL(clicked(bool)));
}
