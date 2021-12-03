//
// Created by TimSalguz on 03.12.2021.
//

#include "classVector.hpp"
namespace ts
{
    void TimVector::Reduce1Array()
    {
        int *tempArray = new int[size-1];
        for (int i = 0; i < size-1; ++i)
        {
            tempArray[i] = array[i];
        }
        delete[] array;
        array = tempArray;
    }

    void TimVector::Expand1Array()
    {
        int *tempArray = new int[size+1];
        for (int i = 0; i < size; ++i)
        {
            tempArray[i] = array[i];
        }
        delete[] array;
        array = tempArray;
    }

    void TimVector::Add(int number)
    {
        Expand1Array();
        array[size] = number;
        size++;
    }

    void TimVector::AddTo(int number, int wherePaste)
    {
        Expand1Array();
        for (int i = size-1; i > wherePaste-1; --i)
        {
            array[i+1] = array[i];
        }
        array[wherePaste] = number;
        size++;
    }

    void TimVector::DeleteEnd()
    {
        Reduce1Array();
        size--;
    }

    void TimVector::DeleteFirst()
    {
        for (int i = 0; i < size-1; ++i)
        {
            array[i] = array[i+1];
        }
        Reduce1Array();
        size--;
    }

    void TimVector::DeleteCenter(int numberElement)
    {
        for (int i = numberElement; i < size-1; ++i)
        {
            array[i] = array[i+1];
        }
        Reduce1Array();
        size--;
    }

    int TimVector::GetLast() {return array[size-1];}

    int TimVector::GetFirst() {return array[0];}


    int TimVector::Size() {return size;}


    int TimVector::GetMax()
    {
        int max = INT_MIN;
        for(int i = 0; i < size; i++)
            if(array[i] > max)
                max = array[i];
        return max;
    }

    int TimVector::GetMin()
    {
        int min = INT_MAX;
        for(int i = 0; i < size; i++)
            if(array[i] < min)
                min = array[i];
        return min;
    }

    int TimVector::GetFrom(int numberElement)
    {
        return array[numberElement];
    }

}