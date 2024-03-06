/* This is the Parser cpp file */
#include "Parser.h"

void Parser::ParseLoop()
{
    Lexer lexer;
    int ret = lexer.GetToken();
    switch (ret) {
        case tok_def:
            std::cout << "this is a def" << std::endl;
    }
    std::cout << IdString << std::endl;
}

void Parser::ParseTopLevel()
{
    ParseLoop();
}