CXXFLAGS = -std=c++11 -g -lcrypt -Wall -pedantic

program: main.o vigenere.o
	$(CXX) $(CXXFLAGS) main.o vigenere.o -o program
main.o: main.cpp vigenere.h
	$(CXX) $(CXXFLAGS) -c main.cpp
vigenere.o: vigenere.cpp vigenere.h
	$(CXX) $(CXXFLAGS) -c vigenere.cpp
clean:
	rm -f *.o core.* program
