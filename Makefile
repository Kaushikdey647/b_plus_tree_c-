CXX=g++
CXXFLAGS=-Wall -Wextra -pedantic -std=c++17 -Ilib
LDFLAGS=-Llib
LDLIBS=

SRCDIR=.
OBJDIR=obj
BINDIR=bin

SOURCES=$(wildcard $(SRCDIR)/lib/*.cpp $(SRCDIR)/main.cpp)
OBJECTS=$(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))

.PHONY: all clean

all: $(BINDIR)/bptree

$(BINDIR)/bptree: $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CXX) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJDIR) $(BINDIR)