#ifndef GPIOLIB_H 
#define GPIOLIB_H

#define IN  0
#define OUT 1
#define LOW  0
#define HIGH 1

int GPIOExport(int pin);
int GPIOUnexport(int pin);
int pinMode(int pin, int dir);
int digitalRead(int pin);
int digitalWrite(int pin, int value);
int blink(int pin,int T, int rep);

#endif