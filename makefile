all: 	main

main:   main.o
	g++ -o main *.o

main.o: main.cpp
	g++ -std=c++11 -c *.cpp

clean:
	rm *.o main
