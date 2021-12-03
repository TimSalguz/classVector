#include <iostream>
#include "classVector.hpp"

int main()
{
    ts::TimVector array;
    int number = 123;
    array.Add(number);
    std::cout << "Mas size = " << array.Size() << std::endl;
    int numberElement = 0;
    std::cout << "Element " << numberElement << " is " << array.GetFrom(numberElement) << std::endl;

    return 0;
}
