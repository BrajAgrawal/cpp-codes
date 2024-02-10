#include <iostream>
#include <math.h>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void sumofcomplex(complex o1, complex o2)
    {
        a = o1.a + o2.a; // important part of problem
        b = o1.b + o2.b;
    }
    void mulofcomplex(complex o1, complex o2)
    {
        a = (o1.a * o2.a) - (o1.b * o2.b); // important part of problem
        b = (o1.a * o2.b) + (o1.b * o2.a);
    }
    void divofcomplex(complex o1, complex o2)
    {
        a = ((o1.a * o2.a) + (o1.b * o2.b))/(o2.a*o2.a+o2.b*o2.b); // important part of problem
        b = ((o1.b * o2.a) -(o1.a * o2.b))/(o2.a*o2.a+o2.b*o2.b);
    }
    void displaycomplex(void)
    {
        cout << "The complex number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3,c4,c5;
    c1.setdata(1, 2);
    c1.displaycomplex();

    c2.setdata(5, 21);
    c2.displaycomplex();

    c3.sumofcomplex(c1, c2);
    c3.displaycomplex();

     c4.mulofcomplex(c1, c2);
    c4.displaycomplex();

     c5.divofcomplex(c1, c2);
    c5.displaycomplex();

    return 0;
}