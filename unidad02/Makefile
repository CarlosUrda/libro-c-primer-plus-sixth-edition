CFLAGSO=-c
CFLAGSG=-Wall
CC=gcc

%.out: %.o
	$(CC) $(CFLAGSG) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) $(CFLAGSG) $^ -o $@
