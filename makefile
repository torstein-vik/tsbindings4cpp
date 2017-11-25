CXXFLAGS=-std=c++11
RM=rm -f


all: tannakiansymbol.o

tannakiansymbol.o: src/main/tannakiansymbol.cpp src/main/tannakiansymbol.h
	$(CXX) $(CXXFLAGS) -c src/main/tannakiansymbol.cpp -o bin/tannakiansymbol.o

testing.o: src/test/lib/testing.cpp src/test/lib/testing.h
	$(CXX) $(CXXFLAGS) -c src/test/lib/testing.cpp -o bin/testing.o

compiletest: all testing.o tannakiansymbol.o
	$(CXX) $(CXXFLAGS) -o bin/test bin/tannakiansymbol.o bin/testing.o -I./src/main -I./src/test/lib src/test/test.cpp

clean:
	$(RM) bin/*
