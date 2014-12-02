CXXFLAGS = -Wall -std=c++11
CXX = g++
CXX_COMPILE = $(CXX) $(CXXFLAGS)
OBJECTS = $(patsubst %.cpp,%.o,$(wildcard *.cpp))

test: $(OBJECTS)
	$(CXX_COMPILE) -o test $^

%.o: %.cpp %.h
	$(CXX_COMPILE) -c $<

clean :
	rm -rf *.o test
