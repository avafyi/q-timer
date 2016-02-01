/**********************************************************
 * QTimer.cpp -- timer package for C++
 **********************************************************/

#include "QTimer.h"

void QTimer::start() {
	startTime = std::chrono::high_resolution_clock::now();
}

void QTimer::stop() {
	endTime = std::chrono::high_resolution_clock::now();
	std::cout << "Timer stopped after " 
		<< std::chrono::microseconds(endTime-startTime).count() 
		<< " nanoseconds" << std::endl;
}
