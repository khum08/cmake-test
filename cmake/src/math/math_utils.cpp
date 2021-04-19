#include "math_utils.h"
#include <string>
#include <sstream>

std::string add(int a, int b)
{
    std::stringstream ss;
    ss << "sum is: " << (a + b);
    return ss.str();
}