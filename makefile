CXXFLAGS = -std=c+11 -g -lcrypt -Wall -pedantic

program: main.o
	$(CXX) $(CXXFLAGS) main.o -o program
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp