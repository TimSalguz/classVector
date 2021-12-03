//
// Created by TimSalguz on 03.12.2021.
//
#include <iostream>
#include "classVector.hpp"
namespace ts
{
    void TimVector::Reduce1Array()
    {
        if(size>0) {
            int *tempArray = new int[size - 1];
            for (int i = 0; i < size - 1; ++i) {
                tempArray[i] = array[i];
            }
            delete[] array;
            array = tempArray;
        }
        else
            std::cout << "ERROR! Array = 0! You can not do it!" << std::endl;
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
        if(wherePaste <= size && wherePaste >= 0)
        {
            Expand1Array();
            for (int i = size - 1; i > wherePaste - 1; --i)
            {
                array[i + 1] = array[i];
            }
            array[wherePaste] = number;
            size++;
        }
    }

    void TimVector::DeleteLast()
    {
        if(size>0)
        {
            Reduce1Array();
            size--;
        }
        else
            std::cout << "ERROR! Array = 0! You can not do it!" << std::endl;
    }

    void TimVector::DeleteFirst()
    {
        if(size>0)
        {
            for (int i = 0; i < size - 1; ++i) {
                array[i] = array[i + 1];
            }
            Reduce1Array();
            size--;
        }
        else
            std::cout << "ERROR! Array = 0! You can not do it!" << std::endl;
    }

    void TimVector::DeleteCenter(int numberElement)
    {
        if(size>0)
        {
            if(numberElement >= 0 && numberElement <= size)
            {
                for (int i = numberElement; i < size - 1; ++i) {
                    array[i] = array[i + 1];
                }
                Reduce1Array();
                size--;
            }
            else
                std::cout << "ERROR! numberElement is incorrect!" << std::endl;
        }
        else
            std::cout << "ERROR! Array = 0! You can not do it!" << std::endl;
    }

    int TimVector::GetLast() {if(size>0) return array[size-1]; else{ std::cout << "ERROR! Array is empty" << std::endl; return -1;}}

    int TimVector::GetFirst() {if(size>0) return array[0]; else{ std::cout << "ERROR! Array is empty" << std::endl; return -1;}}

    int TimVector::Size() {return size;}


    int TimVector::GetMax()
    {
        if(size>0)
        {
            int max = INT_MIN;
            for (int i = 0; i < size; i++)
                if (array[i] > max)
                    max = array[i];
            return max;
        }
        else
        {
            std::cout << "ERROR! Array is empty" << std::endl;
            return -1;
        }
    }

    int TimVector::GetMin()
    {
        if(size>0)
        {
            int min = INT_MAX;
            for (int i = 0; i < size; i++)
                if (array[i] < min)
                    min = array[i];
            return min;
        }
        else
        {
            std::cout << "ERROR! Array is empty" << std::endl;
            return -1;
        }
    }

    int TimVector::GetFrom(int numberElement)
    {
        if(numberElement >= 0 && numberElement < size)
        return array[numberElement];
    }

}