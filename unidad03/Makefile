CFLAGS=-Wall
CC=gcc

%.out: %.o
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) -c $(CFLAGS) $^ -o $@
