main:main.o mergelist.o
	gcc main.o mergelist.o -o main
main.o:main.c
	gcc -c main.c
mergelist.o:mergelist.c
	gcc -c mergelist.c
clean:
	rm main *.o
