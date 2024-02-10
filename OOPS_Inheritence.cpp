#include <iostream>
using namespace std;
class Human 
{
    public: 
    int height= 180;
    protected :
    int weight = 80;
    private : 
    int income = 2400000;
};
class Male1 : public Human
{  public :
   
   void getheight()
   {
   cout<<this->height<<endl;
   }
    void getweight()
   {
   cout<<this->weight<<endl;
   }
//      void getincome()
//    {
//    cout<<this->income<<endl;
//    }

};
int main()
{ Male1 braj;
cout<<braj.height<<endl;
braj.getheight();
braj.getweight();
return 0;
}