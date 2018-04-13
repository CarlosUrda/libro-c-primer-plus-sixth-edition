CFLAGS=-c
CC=gcc

%.out: %.o
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) $^ -o $@
