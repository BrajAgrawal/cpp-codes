#include <iostream>
using namespace std;

class Human
{

public:
    int age; char gender;
    Human()      //Simple Constructor
    {
        cout << "Simple Constructor Called" << endl;  
    }
    Human(int age)   //Parameterised constructor
    {
        this -> age = age;
        cout << "Parameterised Constructor Called" << endl;
    }
     Human(int age,char gender)   //Parameterised constructor
    {
        this -> age = age;
        this -> gender = gender;
        cout << "Parameterised Constructor Called" << endl;
    }
    Human (Human& H)   //Copy Constructor
    {
      this->age = H.age;
      this->gender = H.gender;
    }
};
int main()
{
    Human Braj(21,'M');
    Human Braj2(Braj);
    cout<<"Braj age and gender are :"<<Braj.age<<"  "<<Braj.gender<<endl;
    cout<<"Braj2 age and gender are :"<<Braj2.age<<"  "<<Braj2.gender<<endl;
}