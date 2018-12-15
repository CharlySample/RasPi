#include <wiringPi.h>


void On_Output(int pin)
{
 pinMode(pin,OUTPUT);
 digitalWrite(pin,HIGH);
}

void Off_Output(int pin)
{
 pinMode(pin,OUTPUT);
 digitalWrite(pin,LOW);
}

