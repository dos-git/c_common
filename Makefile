# Rules section
#
main :
	gcc main.c common.c -o main.o

gdb  :
	gcc -g main.c common.c -o main.o


clean :
	rm main.o
