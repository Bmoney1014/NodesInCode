/*
 * Runner.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: bhos1889
 */

#include "NodeController.h"

int Main()
    {
        double moreNumbers[5];
        
        for(int spot = 0; spot < 5; spot++)
        {
            moreNumbers[spot] = (spot * 25+ 125) % 375.25);
        }
        
    NodeController * baseController = new NodeController();
    baseController->start();
    return 0;
    }


