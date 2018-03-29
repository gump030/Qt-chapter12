#pragma once

#include <QtWidgets/QWidget>
#include "ui_Threaddlg.h"

class Threaddlg : public QWidget
{
	Q_OBJECT

public:
	Threaddlg(QWidget *parent = Q_NULLPTR);

private:
	Ui::ThreaddlgClass ui;
};
