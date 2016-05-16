/*
 * Timer.h
 *
 *  Created on: Feb 16, 2016
 *      Author: bhos1889
 */

#ifndef MODEL_TIMER_H_
#define MODEL_TIMER_H_
#include <timer.h>
class Timer
    {
private:
    clock_t executionTime;
public:
    Timer();
    virtual ~Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayTimerInformation();
    long getExecutionTimeInMicroseconds();
    };



#endif /* MODEL_TIMER_H_ */
