#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> li = {1, 2, 4, 8};
    cout<<"empty = "<<li.empty()<<endl;
    li.push_back(12);
    li.push_back(24);
    li.push_front(0);
    // li.at(4)=5;li[4]=5; //list cannot be accessed like this
    for (int i : li)
        cout << i << " ";
    cout << endl;
    cout << "size of list = " << li.size() << endl;
    li.pop_back();

    cout<<"li front and back are =  "<<li.front()<<"   "<<li.back()<<endl;
    cout<<"before begiin deletion"<<endl;
    for (int i : li)
        cout << i << " ";
    cout << endl;

    li.erase(li.begin());
    cout<<"after begiin deletion"<<endl;
    for (int i : li)
        cout << i << " ";
    cout << endl;

    li.erase(li.begin(), li.end());
    cout<<"empty = "<<li.empty()<<endl;
   li.push_back(24);
    for (int i : li)
        cout << i << " ";
    cout << endl;
    return 0;
}