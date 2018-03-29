#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QDialog>
#include <QPushButton>
#include "WorkThread.h"
#define MAXSIZE 4

class ThreadDlg : public QDialog
{
	Q_OBJECT

public:
	ThreadDlg(QWidget *parent = 0);
	~ThreadDlg();
private:
	QPushButton * startBtn;
	QPushButton *stopBtn;
	QPushButton *quitBtn;
	public slots:
	void slotStart();
	void slotStop();
private:
	WorkThread * workThread[MAXSIZE];
};

