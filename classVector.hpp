//
// Created by TimSalguz on 03.12.2021.
//

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

        void AddTo(int number, int wherePaste);

        void DeleteLast();

        void DeleteFirst();

        void DeleteCenter(int numberElement);

        int Size();

        int GetMax();

        int GetMin();

        int GetFrom(int numberElement);

        int GetLast();

        int GetFirst();

    private:
        void TimVector::Expand1Array();
        void TimVector::Reduce1Array();

    };
}