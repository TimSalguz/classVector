#include <iostream>

class TimVector
{
    int size = 0;
    int numberElement = 0;
    int *massive = new int[0];
    int *numbersPositive = new int[0];
    int *numbersNegative = new int[0];

    int numberElementEnd = 0;
    int numberElementBegin = 0;
public:
    TimVector()
    {
        int size = 0;
    }
    ~TimVector()
    {
        //delete[] massive;
    }
    void AddToEnd(int number)
    {
        numberElement = size;
        massive[numberElement] = number;
        size++;
        numbers[numberElementEnd] = massive[number];
    }
    void AddToBegin()
    {
        size++;
        numberElementBegin--;

    }
    void AddToCenter()
    {
        size++;
    }
    void DeleteElementEnd()
    {

        size--;
    }
    void DeleteElementBegin()
    {

        size--;
        //numberElementBegin++;
    }
    void DeleteElementCenter(int numberElement)
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
    int Size()
    {
        return size;
    }
    int GetMax()
    {
        for(int i = numberElementBegin; i < numberElementEnd; i++)
            int max = INT_MIN;
            if(numbers[i] >= max)
                numbers[i] = max;
    }
    int GetMin()
    {

    }
    int GetFromCenter(int numberElement)
    {
        return massive[numberElement];
    }
    int GetFromEnd()
    {
        return massive[numberElementEnd];

    }
    int GetFromBegin()
    {
        return massive[numberElementBegin];
    }
private:

};

int main()
{
    TimVector array;
    int number = 123;
    array.AddToEnd(number);
    std::cout << "Mas size = " << array.Size() << std::endl;
    int numberElement = 0;
    std::cout << "Element " << numberElement << " is " << array.GetData(numberElement) << std::endl;

    return 0;
}
