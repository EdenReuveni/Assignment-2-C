

all: myBanklibary mains

myBanklibary:myBanklibary.a

mains: main.o myBanklibary.a
	gcc -Wall -g -o mains main.o myBanklibary.a

myBanklibary.a: myBank.o
	ar rcs -o myBanklibary.a myBank.o

main.o:myBank.h main.c
	gcc -Wall -g -c -FPIC main.c

myBank.o:myBank.c
	gcc -Wall -g -c -FPIC myBank.c

.PHONY: all clean myBanklibary


clean:
	rm -f *.o *.a *.so mains maind


