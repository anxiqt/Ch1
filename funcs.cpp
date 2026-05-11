#include <iostream>
#include "various.h"




void control_struct(int x, int y)
{
    if(x > y)
        std::cout << "x is greater than y\n";
    
    else if (y > x)
        std::cout << "y is greater than x\n";
    
    else
        std::cout << "x and y are equal!\n";
}

int add(int a, int b)
{
    return a + b;
}