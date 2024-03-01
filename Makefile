### Makefile for Teo ###

EXE=Teo
INC=\

SRC=\
	src/parser.cpp\

CXX=clang++
CXXFLAGS=-g -O3
LFLAGS=
LDFLAGS=
LLVMFLAGS=llvm-config --cxxflags

.SUFFIXES:

all:	$(EXE)

$(INC): $(SRC)

$(EXE):	$(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $@ $(LFLAGS) $(LDFLAGS) `$(LLVMFLAGS)`

clean:
	rm -f $(EXE)
