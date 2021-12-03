//
// Created by TimSalguz on 03.12.2021.
//
#include <iostream>

#ifndef CLASSVECTOR_CLASSVECTOR_HPP
#define CLASSVECTOR_CLASSVECTOR_HPP

#endif //CLASSVECTOR_CLASSVECTOR_HPP
namespace ts
{
    class TimVector
    {
        int size = 0;
        int *array = new int[0];

    public:
        TimVector() { }
        ~TimVector(){ delete[] array;}

        void Add(int number);

        void AddTo(int number);

        void DeleteElementEnd();

        void DeleteElementCenter(int numberElement);

        int Size() {return size;}

        int GetMax();

        int GetMin();

        int GetFrom(int numberElement);

        int Get() {return array[size];}

    private:

    };
}