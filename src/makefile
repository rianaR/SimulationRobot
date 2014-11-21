DEFS = -D_DEBUG_
CXXFLAGS = -g -Wall -std=c++11 
CXX = g++ 
CXX_COMPILE = $(CXX) $(CXXFLAGS) $(DEFS)

test : *.o
	$(CXX_COMPILE) -c test.cpp -o %

%.o :	%.cpp
	$(CXX_COMPILE) -c $*.cpp