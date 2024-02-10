#include <iostream>
using namespace std;
int main()
{
    // A single variable

    int *a = new int;             //creation
    *a = 5;                      //assigning
    cout << *a << endl;          //output
    delete a;                   //memory release

    // An array

    int *arr = new int[5];        //creation

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i * 5;           //assigning
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";   //output
    }
    cout << endl;

    delete[] arr;                //memory release


    return 0;
}