#include <iostream>
#include <calc/calc.h>

int main( int argc, char* args[] )
{
    std::cout << "Hello world" << std::endl;
    
    calc c(123);
    std::cout << "value " <<  c.get() << std::endl;
    c.add(5);
    std::cout << "value " <<  c.get() << std::endl;
    
    std::cout << "By by" << std::endl;
   
    return 0;
}