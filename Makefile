CFLAGS += -g

clean:
	rm *.o
	rm test

test: random.o random.c
	gcc $(CFLAGS) -o test random.c random.o
