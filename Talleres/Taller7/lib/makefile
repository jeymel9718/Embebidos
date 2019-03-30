all: libGpioLib.so

libGpioLib.so: gpioLib.o
		$(LD)  gpioLib.o -o libGpioLib.so  -shared 
gpioLib.o: gpioLib.c
		$(CC) -c -fPIC gpioLib.c -I../include
