#include <iostream>
using namespace std;
class complex
{
  float a;
  float b;

public:
  void read(void)
  {
    cout << "Enter The real part of complex Number" << endl;
    cin >> a;
    cout << "Enter The imaginary part of complex Number" << endl;
    cin >> b;
    cout << endl;
  }
  void display(void)
  {
    cout << "The required complex number is (" << a << ")+(" << b << "i)" << endl
         << endl;
  }
  void sumofcomplex(complex o1, complex o2)
  {
    a = o1.a + o2.a;
    b = o1.b + o2.b;
  }
  void mulofcomplex(complex o1, complex o2)
  {
    a = (o1.a * o2.a) - (o1.b * o2.b);
    b = (o1.a * o2.b) + (o1.b * o2.a);
  }
  void divofcomplex(complex o1, complex o2)
  {
    a = ((o1.a * o2.a) + (o1.b * o2.b)) / (o2.a * o2.a + o2.b * o2.b);
    b = ((o1.b * o2.a) - (o1.a * o2.b)) / (o2.a * o2.a + o2.b * o2.b);
  }
};

int main()
{
  complex c1, c2, c3;

  while (true)
  {
    int cmd;
    cout << " Enter 1 to perform sum \n Enter 2 to perform multiplication \n Enter 3 to perform division \n Enter 4 to square a complex \n Enter 0 to Exit" << endl;
    cin >> cmd;

    if (cmd == 0)
      break;

    else if (cmd == 1)
    {
      c1.read();
      c2.read();
      c3.sumofcomplex(c1, c2);
      c3.display();
    }

    else if (cmd == 2)
    {
      c1.read();
      c2.read();
      c3.mulofcomplex(c1, c2);
      c3.display();
    }

    else if (cmd == 3)
    {
      c1.read();
      c2.read();
      c3.divofcomplex(c1, c2);
      c3.display();
    }

    else if (cmd == 4)
    {
      c1.read();
      c3.mulofcomplex(c1, c1);
      c3.display();
    }
    else cout<<"invalid"<<endl;
  }

  return 0;
}