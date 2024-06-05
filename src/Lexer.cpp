/* This is the Lexer cpp file. */
#include "Lexer.h"

int Lexer::GetToken() {
    // Clear buffer.
    static int LastChar = ' ';

    // Each token is complete when space occurs.
    while (isspace(LastChar))
        LastChar = getchar();

    // Special and ID token.
    if (isalpha(LastChar)) {
        IdString = LastChar;
        while (isalnum(LastChar = getchar()))
            IdString += LastChar;

        if (IdString == "def")
            return tok_def;
        if (IdString == "extern")
            return tok_ext;
        return tok_id;
    }

    // Numeric values.
    if (isdigit(LastChar) || LastChar == '.') {
        std::string NumStr;
        do {
            NumStr += LastChar;
            LastChar = getchar();
        } while (isdigit(LastChar) || LastChar == '.');

        NumVal = strtof(NumStr.c_str(), 0);
        return tok_num;
    }

    // Comments.
    if (LastChar == '#') {
        do
            LastChar = getchar();
        while (LastChar != EOF && LastChar != '\n' && LastChar != '\r');

        if (LastChar != EOF)
            return GetToken();
    }

    // End of file
    if (LastChar == EOF)
        return tok_eof;

    // Return ascii value if nothing.
    int ThisChar = LastChar;
    LastChar = getchar();
    return ThisChar;

    return 0;
}
