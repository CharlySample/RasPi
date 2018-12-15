#include <wiringPi.h>
#include <iostream>
#include "../carlosPi.hpp"

using namespace std;

int main()
{
	wiringPiSetup();
	int i=0;
	
	for(;;)
	{
		On_Output(0);
		cout << "Led encendido, N. Iteracion: " << i << endl;
		delay(1000);
		Off_Output(0); 
		cout << "Led apagado, N. Iteracion: " << i << endl;
		delay(1000);
		i++;
	}
	
	return 0;
}
