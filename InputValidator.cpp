#pragma once
#include "InputValidator.h"
#include <string>
static inline bool isInteger(const char* input){
    try
    {
        std::stoi(input);
        return true;
    }
    catch(...)
    {
        return false;
    }
}
static inline bool isDecimal(const char* input){
    try
    {
        std::stod(input);
        return true;
    }
    catch(...)
    {
        return false;
    }
}

inline bool hasNumbers(const char* input) {
    if (isInteger(input))
    {
        return true;
    }
    else if (isDecimal(input))
    {
        return true;
    }
    return false;
}