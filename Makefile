CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

all: animales

animales: main.o Animal.o
	$(CXX) $(CXXFLAGS) -o programa main.o Animal.o

main.o: main.cpp Animal.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Animal.o: Animal.cpp Animal.h
	$(CXX) $(CXXFLAGS) -c Animal.cpp

clean:
	rm -f *.o animales
