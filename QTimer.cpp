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
		<< std::chrono::nanoseconds(endTime-startTime).count()/1000000.0 
		<< " milliseconds" << std::endl;
}
