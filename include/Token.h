#ifndef TOKEN_H_
#define TOKEN_H_

#include <string>

// If token returns values range [0, 255], it should be an ASCII value.
enum Token {
    tok_eof = -1,
    // commands
    tok_def = -2,
    tok_ext = -3,
    // primary
    tok_id = -4,
    tok_num = -5,
};

static std::string IdString; // To store tok_id string.
static double NumVal;        // To store number value.

#endif