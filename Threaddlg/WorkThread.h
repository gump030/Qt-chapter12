#pragma once
#pragma execution_character_set("utf-8")
#include <QThread>

class WorkThread : public QThread
{
	Q_OBJECT
public:
	WorkThread();
protected:
	void run();
};

