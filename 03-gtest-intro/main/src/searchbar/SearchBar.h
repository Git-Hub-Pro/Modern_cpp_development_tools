#pragma once

#include <string>

#include "Calculator.h"

class SearchBar
{
    Calculator calculator;
public:

    std::string
    process(int left, int right, int op);
};
