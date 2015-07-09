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
#include <Bot.h>

DCMotorBot bot;

void setup() {

    // initialize bot pins
    bot.setEnablePins(10, 11);
    bot.setControlPins(4, 3, 7, 8);
}

void loop() {
    bot.goForward();
    delay(2000);
    bot.goBackward();
    delay(2000);
    bot.steerLeft();
    delay(2000);
    bot.steerRight();
    delay(2000);
}