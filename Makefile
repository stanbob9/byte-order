all: add-nbo

add-nbo: convert.o main.o
	g++ -o add-nbo convert.o main.o

convert.o: convert.h convert.cpp
	g++ -c -o convert.o convert.cpp

main.o: main.cpp convert.h
	g++ -c -o main.o main.cpp

clean:
	rm -f add-nbo *.o