/* This is a temp frontend for the language, like a simple REPL. */
#include "Parser.h"

// Main driver program.
int main() {
    Parser parser;
    parser.ParseTopLevel();
    return 0;
}