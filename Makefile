CC=gcc
CFLAGS="-Wall"

debug:clean
	$(CC) $(CFLAGS) -g -o mfir main.c
stable:clean
	$(CC) $(CFLAGS) -o mfir main.c
clean:
	rm -vfr *~ mfir
