/**
    DCMotorBot - A simple library to control bots made using 2 simple DC Motors

    http://hardwarefun.com/projects/dc-motor-bot
*/

/*
 * Copyright 2012  Sudar Muthu  (email : sudar@sudarmuthu.com)
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <sudar@sudarmuthu.com> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer or coffee in return - Sudar
 * ----------------------------------------------------------------------------
 */

//TODO: Add speed control using PWM
#ifndef DCMotorBot_H
#define DCMotorBot_H

// Compatibility for Arduino 1.0

#if ARDUINO >= 100
    #include "Arduino.h"
#else    
    #include "WProgram.h"
#endif

class DCMotorBot {

public:

    // constructor
    DCMotorBot(); // empty constructor
    DCMotorBot(byte el, byte e2, byte I1, byte I2, byte I3, byte I4, int delay); // full constructor

    void setEnablePins(byte el, byte e2);
    void setControlPins(byte I1, byte I2, byte I3, byte I4);
    void setDelay(int delay);
    void setSpeed(int speed);

    // movement functions
    void start();
    void moveForward();
    void moveBackward();
    void turnLeft();
    void turnRight();
    void stop();

    // movement functions for front steering
    void goForward();
    void goBackward();
    void steerLeft();
    void steerRight();

private:

    int mDelay; // delay while switching
    int mSpeed; // PWM motor speed

    // enable pins
    byte mE1;
    byte mE2;

    // Control Pins
    byte mI1;
    byte mI2;
    byte mI3;
    byte mI4;
};

#endif
