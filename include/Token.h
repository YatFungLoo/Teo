#include <string>

// If token returns values range [0, 255], it should be an ASCII value.
enum Token {
    tok_eof = -1,
    tok_def = -2,
    tok_ext = -3,
    tok_id = -4,
    tok_num = -5,
};

static std::string IdString;    // To store id string.
static double NumVal;           // To store number value.