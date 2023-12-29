ABC.exe:main.o big.o 
	gcc -o ABC.exe main.o big.o
main.o:main.c
	gcc -c main.c
big.o:big.c
	gcc -c big.c
