#include <iostream>
#include<cstring>
using namespace std;
class Human {
 public:
 int age;
 char gender;
 char *name;
 
 Human (int age,char gender, char name[])
 {
    this ->age = age;
    this->gender = gender;
    this->name =name;
 }

  void print1()
 {  cout<<endl<<endl<<endl;
    cout<<"In Human1 the values are : [ "<<this->age;
    cout<<" , "<<this->gender<<" , ";
    cout<<this->name<<" ] ";
    cout<<endl<<endl<<endl;
 }
};
class Human2 {
 public:
 int age;
 char gender;
 char* name;
 Human2 (int age,char gender, char name[])
 {  
  
    this ->age = age;
    this->gender = gender;
    this->name =name;
 }
 Human2 (Human2 &HumanB)
 {
    char * ch = new char[strlen(HumanB.name)+1];
    strcpy ( ch, HumanB.name);
    this->name=ch;
    this->age = HumanB.age;
    this->gender = HumanB.gender;
 }
 void print2()
 {  cout<<endl<<endl<<endl;
    cout<<"In Human2 the values are : [ "<<this->age;
    cout<<" , "<<this->gender<<" , ";
    cout<<this->name<<" ] ";
    cout<<endl<<endl<<endl;
 }
  
};
int main()
{ char name[5] = "Braj";
  char name2[6] = "Mohit";
  
  Human  HumanA1(21,'M',name);
  Human HumanA2(HumanA1);
  Human2 HumanB1(19,'M',name2);
  Human2 HumanB2(HumanB1);

  HumanA1.print1();
  HumanA2.print1();
  HumanB1.print2();
  HumanB2.print2();

  HumanA1.name[0] = 'A';
  HumanB1.name[0] = 'R';

  HumanA1.print1();
  HumanA2.print1();
  HumanB1.print2();
  HumanB2.print2();

return 0;
}