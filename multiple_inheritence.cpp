#include <iostream>
#include <math.h>
using namespace std;
class simple_calculator
{
public:
void greet(void){
    cout<<"Hello simple guy"<<endl;
}
    void arthematic(int a, int b);
};
void simple_calculator ::arthematic(int a, int b)
{
    cout << "The sum of Numbers is : " << a + b << endl;
    cout << "The substraction of Numbers is : " << a - b << endl;
    cout << "The multiplication of Numbers is : " << a * b << endl;
    cout << "The division of Numbers is : " << a / b << endl;
}
class scientific_calculator
{
public:
void greet(void){
    cout<<"Hii Scientific bro"<<endl;
}
    void trigonometry(int a);
};
void scientific_calculator::trigonometry(int a)
{
    cout << "the sin of number is : " << sin(a) << endl;
    cout << "the cos of number is : " << cos(a) << endl;
    cout << "the tan of number is : " << tan(a) << endl;
}
class hybrid : public simple_calculator, public scientific_calculator
{ public:
    void greet(void){
  scientific_calculator :: greet(); ///removing the ambiguity
}
};
int main()
{
    simple_calculator s1;
    scientific_calculator s2;
    hybrid h1;
    s1.greet();
    s1.arthematic(6, 2);
    s2.greet();
    s2.trigonometry(0);
    h1.greet();
    h1.arthematic(18, 9);
    h1.trigonometry(M_PI);

    return 0;
}