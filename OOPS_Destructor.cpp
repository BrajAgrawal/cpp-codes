#include <iostream>
using namespace std;
class Human 
{ public:
   int age;
  string name;
  Human (int age , string name) // Constructor
  {  this->age = age;
     this->name = name;
  }

  ~Human() //destructor
  {
    cout<<"Destructor Called for "<<this->name<<endl;
  }
};
int main()
{
Human Braj(21,"Braj");
Human* Mohit = new Human(19,"Mohit");
return 0;
}