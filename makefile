CC=gcc
FLAG=-Wall
AR=ar
fPIC=-fPIC
all: myBanks mains


myBanks: myBanks.a
mains: main.o myBanks.a
	$(CC) $(FLAG) -g -o mains main.o myBanks.a
myBanks.a: myBank.c 
	$(AR) rcs -o myBanks.a mybank.o
myBank.o:myBank.c myBank.h
	$(CC) $(FLAG) $(fPIC) -g -c  myBank.c

main.o:myBank.h main.c
	$(CC) $(FLAG) -g -c main.c
.PHONY: myBanks clean all
clean:
	rm -f *.o *.a *.so mains maind