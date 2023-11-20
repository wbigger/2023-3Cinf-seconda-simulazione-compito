main:
	gcc main.c fisica.c -o main

clean:
	rm main fisica.o

test: main
	bash test.sh