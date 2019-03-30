#include <stdio.h>
#include <gpioLib.h>

int main(){
    int salida1,salida2,entrada1;
    salida1=4; 
    salida2=17;
    entrada1=24;
    /*
	 * Enable GPIO pins
	 */
	if (-1 == GPIOExport(salida1) || -1 == GPIOExport(entrada1))
		return(1);
    /*
	 * Set GPIO directions
	 */
	if (-1 == pinMode(salida1, OUT) || -1 == pinMode(entrada1, IN))
		return(2);
    /*
        * Write GPIO value
        */
    if (-1 == digitalWrite(salida1,HIGH))
        return(3);    
    
    //blink
    blink(salida2,3,5);

    /*
		 * Read GPIO value
		 */
		printf("I'm reading %d in GPIO %d\n", digitalRead(entrada1), entrada1);

    /*
	 * Disable GPIO pins
	 */
	if (-1 == GPIOUnexport(salida1) || -1 == GPIOUnexport(entrada1))
		return(4);

	return(0);


}