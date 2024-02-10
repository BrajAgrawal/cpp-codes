#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
  // intialisation
  char name[20];
  cin>>name;
  cout<<"Your name is "<<name<<endl;
  name[2]='\0';
  cout<<"Your name is "<<name<<endl;


  char name2[20] = {'b','r','a','j',' ','a','g','r','a','w','a','l'};
  cout<<"Your name2 is "<<name2<<endl;


// length of character array
int count =0;
for(int i=0;name2[i]!='\0';i++) count++;
cout<<"Length of name2 array is "<<count<<endl;
int size = strlen(name2);
cout<<size<<endl;

// reverse a character array
int s=0,e=count-1;
while(s<e)
{
    swap(name2[s],name2[e]);
    s++;e--;
}
cout<<name2<<endl;

//storing a character array with spaces

char name4[20];
cout<<"Enter name 4 : "<<endl;
cin.getline(name4,20,'$');
cout<<"name 4 is : "<<name4<<endl;

// strings
string st;
st= "Brajagrawal";
cout<<st<<endl;
cout<<st.length()<<endl;
st.push_back('\0');
st.push_back('a');
st.push_back('g');
cout<<st<<endl;
cout<<st.length()<<endl;




return 0;
}