//
// Created by TimSalguz on 03.12.2021.
//

#include "classVector.hpp"
namespace ts
{
    void TimVector::Add(int number)
    {
        array[size] = number;
        size++;
    }

    void TimVector::AddTo(int number)
    {
        size++;
    }

    void TimVector::DeleteElementEnd()
    {
        size--;
    }

    void TimVector::DeleteElementCenter(int numberElement)
    {

        size--;
        if(numberElement<0)
        {
            //numberElementBegin++;
        }
        else
        {
            //numberElementEnd--;
        }
    }

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
            if(array[i] > min)
                min = array[i];
        return min;
    }

    int TimVector::GetFrom(int numberElement)
    {
        return array[numberElement];
    }

}