CXXFLAGS=-std=c++11
RM=rm -f


all: tannakiansymbol.o

tannakiansymbol.o: src/main/tannakiansymbol.cpp src/main/tannakiansymbol.h
	$(CXX) $(CXXFLAGS) -c src/main/tannakiansymbol.cpp -o bin/tannakiansymbol.o

testing.o: src/test/lib/testing.cpp src/test/lib/testing.h
	$(CXX) $(CXXFLAGS) -c src/test/lib/testing.cpp -o bin/testing.o


clean:
	$(RM) bin/*
