#include<bits/stdc++.h>
using namespace std;

class history{
    public:
    string name;
    string Address;
    int age;
    int roll;
    list<string>subject;

};

int main()
{
    history h;
    h.name='Maliha';
    h.Address="Rangpur";
    h.age=23;
    h.roll=1803030;
    h.subject={"c++","oop","Data structure"};
    cout<<"Name:"<<h.name<<endl;
    cout<<"Address:"<<h.Address<<endl;
    cout<<"Roll:"<<h.roll<<endl;
    cout<<"subjects:"<<endl;
    for(string sub : h.subject)
        cout<<sub<<endl;

}
