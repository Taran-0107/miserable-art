CC = gcc

#ROOT = ./hello1
#INIT = $(ROOT)/init
#LOOP= ./loops
FUNC= ./funky
REC=./rec

all: funky1 recur

#loop2: $(LOOP)/loop2.c 
#	$(CC) -o $(LOOP)/loop2 $(LOOP)/loop2.c

#loop: $(LOOP)/loop1.c 
#	$(CC) -o $(LOOP)/loop1 $(LOOP)/loop1.c

#hello: $(ROOT)/hello.c $(INIT)/init.c $(INIT)/init.h
#	$(CC) -I$(INIT) -o $(ROOT)/hello $(ROOT)/hello.c $(INIT)/init.c

#kovid: $(ROOT)/kovid.c $(INIT)/init.c $(INIT)/init.h
#	$(CC) -I$(INIT) -o $(ROOT)/kovid $(ROOT)/kovid.c $(INIT)/init.c

funky1: $(FUNC)/func2.c 
	$(CC) -o $(FUNC)/func2 $(FUNC)/func2.c

recur: $(REC)/recur.c 
	$(CC) -o $(REC)/recur $(REC)/recur.c

clean:
#	del $(ROOT)/hello.exe $(ROOT)/kovid.exe
#	del $(LOOP)/loop1.exe $(LOOP)/loop2.exe
	del $(FUNC)/func2.exe
