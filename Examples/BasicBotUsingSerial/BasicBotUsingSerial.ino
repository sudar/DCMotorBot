/**
    BasicBot - The basic working bot, using DCMotorBot library.

    Requires DCMotorBot Library available at http://hardwarefun.com/projects/dc-motor-bot
*/

/*
 * Copyright 2012  Sudar Muthu  (http://hardwarefun.com)
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <sudar@sudarmuthu.com> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer or coffee in return - Sudar
 * ----------------------------------------------------------------------------
 */
#include <DCMotorBot.h>

DCMotorBot bot;
int val;

void setup() {
    // initialize bot pins
    bot.setEnablePins(3, 5);
    bot.setControlPins(2, 4, 7, 8);
    bot.setDelay(100);

    // for debugging
    Serial.begin(115200);
}

void loop() {
  
    if (Serial.available()) {
        switch(Serial.read()) {

            case 1:     
                bot.moveForward();
                break;

            case 2:
                bot.moveBackward();
                break;    

            case 3:      
                bot.turnLeft();
                break;    

            case 4:          
                bot.turnRight();
                break;    

            case 5:
                bot.stop();
                break;
        }
    }
}
