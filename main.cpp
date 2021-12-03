#include <iostream>
#include "classVector.hpp"

int main()
{
    ts::TimVector array;

    //пример заполнения
    std::cout << "Before:" << std::endl;

    for (int i = 0; i < 10; ++i)
    {
        array.Add(i*3);
    }
    std::cout << "Mas size = " << array.Size() << std::endl;
    for(int i = 0; i < array.Size(); i++)
        std::cout << array.GetFrom(i) << std::endl;

    std::cout << "After paste:" << std::endl;
    array.AddTo(999,4);
    std::cout << "Mas size = " << array.Size() << std::endl;
    for(int i = 0; i < array.Size(); i++)
        std::cout << array.GetFrom(i) << std::endl;

    std::cout << "After reduce:" << std::endl;
    array.DeleteElementEnd();
    std::cout << "Mas size = " << array.Size() << std::endl;
    for(int i = 0; i < array.Size(); i++)
        std::cout << array.GetFrom(i) << std::endl;

    std::cout << "Maximum value:" << std::endl;
    std::cout << array.GetMax() << std::endl;

    return 0;
}
