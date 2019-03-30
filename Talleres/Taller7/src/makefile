
all: app

app: gpioApp.c
		bash ./export.sh
		$(CC) -o ../bin/gpioApp gpioApp.c -I ../include -L ../lib -lGpioLib
