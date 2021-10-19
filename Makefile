CC=clang
CFLAGS= -Wall -g -O3
default:
	$(CC) $(CFLAGS) -c cipherenc.c
	$(CC) $(CFLAGS) -lpthread server.c cipherenc.o -o server
	$(CC) $(CFLAGS) -lpthread client.c cipherenc.o -o client
clean:
	rm server client cipherenc.o