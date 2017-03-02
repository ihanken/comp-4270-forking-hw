all: fork1 fork2 fork3 fork4

fork1: fork1.c

fork2: fork2.c

fork3: fork3.c

fork4: fork4.c

run: fork1 
	./fork1

clean: 
	rm -f *~ fork[12345]
