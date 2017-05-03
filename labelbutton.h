#ifndef LABELBUTTON_H
#define LABELBUTTON_H

#include <QPushButton>

class LabelButton : public QPushButton
{
	Q_OBJECT

public:
	LabelButton(QPushButton * main, QPushButton * label);
private:
	QPushButton * main;
	QPushButton * label;
};

#endif // LABELBUTTON_H
