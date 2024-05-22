#ifndef scanner_h
#define scanner_h

#include "token.h"

/** * @param inputCode */
TokenType scan(char* inputCode);

/** * @param inputCode
 *    @param cursorIndex */
TokenType scanNext(char* inputCode, int cursorIndex);

#endif