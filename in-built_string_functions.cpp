#include <iostream>
#include <cstring>
using namespace std;

int main()
{ // character array
    char name1[20];
    cin.getline(name1, 20);
    char name2[22];
    cin.getline(name2, 20);
    int len = strlen(name1);
    bool same = strcmp(name1, name2);
    cout << "length = " << len << " same = " << same << endl;


  //string
  string s1= "Braj Kumar";
  string s2= "Braj Agrawal";
  string s3= "Braj Kumar";

  int len2= s1.length();
  bool same2= s1.compare(s2);
  cout << "length = " << len2 << " same = " << same2 << endl;

  bool same3= s1.compare(0,4,s2,0,4);


    return 0;
}