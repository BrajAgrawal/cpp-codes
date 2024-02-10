#include <iostream>
#include<cstring>
using namespace std;
class Human {
 public:
 char *name;
 
 Human ( char name[])
 {
    this->name =name;
 }

  void print1()
 {  cout<<endl;
    cout<<this->name;
    cout<<endl;
 }
};
class Human2 {
 public:
 char* name;
 Human2 ( char name[])
 {  
    this->name =name;
 }
 Human2 (Human2 &HumanB)
 {
    char * ch = new char[strlen(HumanB.name)+1];
    strcpy( ch, HumanB.name);
    this->name=ch;
 }
 void print2()
 {  cout<<endl;
    cout<<this->name<<"  ";
    cout<<endl;
 }
  
};
int main()
{ char name[5] = "Braj";
  char name2[6] = "Mohit";
  
  Human  HumanA1(name);
  Human HumanA2(HumanA1);
  Human2 HumanB1(name2);
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