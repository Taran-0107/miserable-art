CC = gcc

ROOT = ./hello
INIT = $(ROOT)/init

all: hello kovid

hello: $(ROOT)/hello.c $(INIT)/init.c $(INIT)/init.h
	$(CC) -I$(INIT) -o $(ROOT)/hello $(ROOT)/hello.c $(INIT)/init.c

kovid: $(ROOT)/kovid.c $(INIT)/init.c $(INIT)/init.h
	$(CC) -I$(INIT) -o $(ROOT)/kovid $(ROOT)/kovid.c $(INIT)/init.c

clean:
	del $(ROOT)\hello.exe $(ROOT)\kovid.exe