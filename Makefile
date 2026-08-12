CC = gcc

ROOT = ./hello1
INIT = $(ROOT)/init
LOOP= ./loops
FUNC= ./funky

all: hello kovid loop loop2 funky

loop2: $(LOOP)/loop2.c 
	$(CC) -o $(LOOP)/loop2 $(LOOP)/loop2.c

loop: $(LOOP)/loop1.c 
	$(CC) -o $(LOOP)/loop1 $(LOOP)/loop1.c

hello: $(ROOT)/hello.c $(INIT)/init.c $(INIT)/init.h
	$(CC) -I$(INIT) -o $(ROOT)/hello $(ROOT)/hello.c $(INIT)/init.c

kovid: $(ROOT)/kovid.c $(INIT)/init.c $(INIT)/init.h
	$(CC) -I$(INIT) -o $(ROOT)/kovid $(ROOT)/kovid.c $(INIT)/init.c

funky: $(FUNC)/func1.c 
	$(CC) -o $(FUNC)/func1 $(FUNC)/func1.c

clean:
	del $(ROOT)/hello.exe $(ROOT)/kovid.exe
	del $(LOOP)/loop1.exe $(LOOP)/loop2.exe
	del $(FUNC)/func1.exe
