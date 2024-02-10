#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int value)
    {
        size = size + 1;
        int index = size;
        arr[index] = value;

        while (index > 1)
        {
            if (arr[index / 2] < arr[index])
            {
                swap(arr[index], arr[index / 2]);
                index = index / 2;
            }
            else
            {
                return;
            }
        }
    }

    void deletion()
    {

        arr[1] = arr[size];
        size = size - 1;

        int index = 1;

        while (index <= size)
        {   
            int largest = index;
            int leftChildIndex = 2 * index;
            int rightChildIndex = 2 * index + 1;
            if (leftChildIndex <= size  && arr[largest] <= arr[leftChildIndex])           
            {
                   
                    largest = leftChildIndex;
            }
            if(rightChildIndex <= size && arr[largest] <= arr[rightChildIndex])
            {
                    largest = rightChildIndex;
            }

            if(largest != index)
            {
                swap(arr[index],arr[largest]);
                index = largest;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << "  ";
        }
        cout << endl;
    }
};


int main()
{
    heap h;
    h.insert(76);
    h.insert(75);
    h.insert(75);
    h.insert(50);
    h.insert(55);
    h.insert(65);

    h.print();

    h.deletion();
    h.print();

    return 0;
}