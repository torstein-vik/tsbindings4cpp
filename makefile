CXXFLAGS=-std=c++11


all: tannakiansymbol.o

tannakiansymbol.o: src/main/tannakiansymbol.cpp src/main/tannakiansymbol.h
	$(CXX) $(CXXFLAGS) -c src/main/tannakiansymbol.cpp -o bin/tannakiansymbol.o
