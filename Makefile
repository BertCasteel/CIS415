CC = gcc

all: galactus

galactus: galactus.c
	$(CC) galactus.c -o galactus

clean:
	rm -rf galactus
