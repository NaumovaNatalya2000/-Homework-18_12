all: prog
prog: main.o User.o Message.o Functions.o 
	g++ main.o User.o Message.o Functions.o -o programm
	rm -rf *.o
main.o:
	g++ -c main.cpp
User.o:
	g++ -c User.cpp
Message.o:
	g++ -c Message.cpp
Functions.o:
	g++ -c Functions.cpp
clear:
	rm -rf *.txt
