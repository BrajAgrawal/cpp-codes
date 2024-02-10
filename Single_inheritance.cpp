#include <iostream>
using namespace std;
class base
{
    int data1 = 100;

public:
    int data2 = 15;
    int printdata1();
    printdata2();
};
int base ::printdata1(void)
{
    return data1;
}
int base ::printdata2(void)
{
    return data2;
}
class der : public base
{
    int data3;

public:
    int data4;
    void process(void);
    void printall(void);
};
void der ::process(void)
{
    data3 = printdata1() + data2;
    data4 = printdata1() - data2;
}
void der ::printall(void)
{
    cout << "The Value of Data1 is " << printdata1() << endl;
    cout << "The Value of Data2 is " << data2 << endl;
    cout << "The Value of Data3 is " << data3 << endl;
    cout << "The Value of Data4 is " << data4 << endl;
}

int main()
{
    der b;
    b.process();
    b.printall();

    return 0;
}