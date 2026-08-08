CC=gcc


all: hello kovid

hello: hello.c init.c init.h
	$(CC) -I. -o hello hello.c init.c

kovid: kovid.c init.c init.h
	$(CC) -I. -o kovid kovid.c init.c

clean:
	rm hello