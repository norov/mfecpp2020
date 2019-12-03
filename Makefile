CXX = g++
CXXFLAGS = -Wall -g

TARGETS = assignment1 assignment1-alt

all: $(TARGETS)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

.PHONY: clean

clean:
	$(RM) $(TARGETS)
