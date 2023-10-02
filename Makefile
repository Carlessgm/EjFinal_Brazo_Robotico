.SUFFIXES: .cpp .h .o
.cpp.o: ; g++ -c $*.cpp

all: main

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h

main.o: main.cpp BrazoRobotico.h

main: BrazoRobotico.o main.o
	g++ -o main BrazoRobotico.o main.o

clean:
	rm -f *.o main

test: all
	./main
