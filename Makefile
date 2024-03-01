### Makefile for Teo ###
EXE=teo
INC=\
	include/Token.h

SRC=\
	src/Parser.cpp\
	src/main.cpp\

CXX=clang++
CXXFLAGS=-g -Iinclude/ -O3
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
