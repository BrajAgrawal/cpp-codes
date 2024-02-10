#include <iostream>
using namespace std;
class employee
{
    static int count;
    int eid;

public:
    void getdata(void);
    void setdata(void);
    static void getcount(void);
};

void employee::setdata(void)
{
    cout << "Enter the employee id " << endl;
    cin >> eid;
    count++;
}
int employee::count = 10000; //always initialise here
void employee::getdata(void)
{
    cout << count << ". The employee id is " << eid << endl;
}
void employee::getcount(void)
{
    cout << "the count is now " << count << endl;
}
int main()
{
    employee harry, rohan, karan;
    harry.setdata();
    harry.getdata();
    employee::getcount();

    rohan.setdata();
    rohan.getdata();
    employee::getcount();

    karan.setdata();
    karan.getdata();
    employee::getcount();

    return 0;
}