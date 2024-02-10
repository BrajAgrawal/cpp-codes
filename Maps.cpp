#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main()
{   
    //Unordered Map
    unordered_map<string,int> name;

    //Insertion
    //Way 1
    pair<string,int> p = make_pair("Braj",60);
    name.insert(p);

    //Way 2
    pair<string,int> p2 = {"Kanhaiya",51};
    name.insert(p2);

    //Way 3
    name["Jeetu"] = 35;

    name["Jeetu"] = 31;               //Replacement in Maps

    //Search
     
    //Way 1
    cout<<name.at("Braj")<<endl;       //60

    //Way 2
    cout<<name["Kanhaiya"]<<endl;      //51

    //When Key not present 

    //Output 1
    // cout<<name.at("Kunal")<<endl;   //Out of Range

    //Output 2
    cout<<name["Kunal"]<<endl;         //This will create a mapping of kunal to 0 and then give output 0
    cout<<name.at("Kunal")<<endl;      //Since mapping is already created in previous line, this line will also give 0 as an output
    
    //Size
    cout<<name.size()<<endl;           //It will also count kunal as an entry since it is created in Output2 line 1

    //Key present or not
     
    cout<<name.count("Braj")<<endl;    //It will give 1 since Braj is present 
    cout<<name.count("Kunal")<<endl;   //It will give 1 since Kunal is present 
    cout<<name.count("Idris")<<endl;   //It willl give 0 since Idris is not present in map

    //Erase
    name.erase("Jeetu");
    cout<<"Size = "<<name.size()<<endl;          //3

    name["Jeetu"] = 31;

    cout<<endl<<endl ;

    //Access Unordered Map          // will give ans in a random way  -> TC - O(1)
    
    //Way 1 - for loop
    for(auto i: name)                 
    cout<<i.first<<"  -  "<<i.second<<endl;
    

    cout<<endl<<endl ;

    //Way 2 - iterator
    unordered_map<string,int> :: iterator it = name.begin();       
    while (it != name.end()) 
    {
        cout<<it->first<<"  -  "<<it->second<<endl;
        it++;
    }

    //Map
    cout<<endl<<"MAP : "<<endl;

    map<string,int> name2;
    name2["Kunal"] =53; 
    name2["Jeetu"] =31; 
    name2["Braj"] = 60; 
    name2["Kanhaiya"] = 51; 

    map<string,int> :: iterator it2 = name2.begin();       
    while (it2 != name2.end())                                     // will give ans in a sorted way  -> TC - O(log n)     
    {
        cout<<it2->first<<"  -  "<<it2->second<<endl;              // Braj,Jeetu,Kanhaiya,Kunal
        it2++;
    }
 

return 0;
}