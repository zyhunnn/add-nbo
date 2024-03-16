#Makefile
all: add-nbo

add-nbo: main.o htons.o
	g++ -o add-nbo main.o htons.o

main.o: htons.h main.cpp
	g++ -c -o main.o main.cpp

htons.o: htons.h htons.cpp
	g++ -c -o htons.o htons.cpp

clean:
	rm -f add-nbo
	rm -f *.o
