#include <iostream>
#include "various.hpp"

int control_struct(int x, int y)
{
    int x, y;
    
    if(x > y)
        std::cout << "x is greater than y\n";
    
    else if (y > x)
        std::cout << "y is greater than x\n";
    
    else
        std::cout << "x and y are equal!\n";

return 0;
}