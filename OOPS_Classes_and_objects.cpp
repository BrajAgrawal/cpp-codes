#include <iostream>
using namespace std;
class Human 
{
 public:                    //Public access modifier
 int age;
 char gender;
 private:                   //Private access modifier
 int income;
 public:
 void setincome(int i,string pswd)   //Setter
 { if(pswd == "God")
    income =  i;
 }
int getincome()                      //Getter
 {
    return income;
 }
};
int main()
{ 
  Human Braj;                         //Static Allocation
  Human * Mohit = new Human;                        //Dynamic Allocation
  Braj.gender = 'M';
  (*Mohit).gender = 'M';
  Braj.age = 21;
  Mohit -> age = 19;
  Braj.setincome(3000000,"God");
  cout<<"Income of Braj is "<<Braj.getincome()<<endl;
  Braj.setincome(2500000,"od");
  cout<<"Income of Braj is "<<Braj.getincome()<<endl;
  Mohit -> setincome(3200000,"God");
  cout<<"Income of Mohit is "<<Mohit -> getincome()<<endl;
  return 0;
}