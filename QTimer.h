/**********************************************************
 * QTimer.h -- include-file for timer package
 **********************************************************/
#ifndef _QTIMER
#define _QTIMER

#include <iostream>
#include <chrono>

class QTimer {
private:
	std::chrono::system_clock::time_point startTime;
	std::chrono::system_clock::time_point endTime;
public:
	void start();
	void stop();
};

#endif
