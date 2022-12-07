CXX = g++
CXXFLAGS = -g -Wall -Wextra

.PHONY: all
all : stockmgtsystem

stockmgtsystem: stockmgtsystem.cpp items.o cd.o dvd.o magazine.o book.o
	$(CXX) $(CXXFLAGS) -o $@ $^

items.o: items.cpp items.h
	$(CXX) $(CXXFLAGS) -c $<

cd.o: cd.cpp cd.h
	$(CXX) $(CXXFLAGS) -c $<

dvd.o: dvd.cpp dvd.h
	$(CXX) $(CXXFLAGS) -c $<

magazine.o: magazine.cpp magazine.h
	$(CXX) $(CXXFLAGS) -c $<

book.o: book.cpp book.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY : clean

clean:
	$(RM) *.~
	$(RM) *.o
	$(RM) stockmgtsystem

