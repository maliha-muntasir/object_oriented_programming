#include<bits/stdc++.h>
using namespace std;

class history{
    public:
    string name;
    string Address;
    int age;
    int roll;
    vector<string>subject;
    history(string NAME, string ADD,int ROLL,int AGE)
    {
        name=NAME;
        Address=ADD;
        age=AGE;
        roll= ROLL;
    }
    void GetInfo()
    {
    cout<<"Name:"<<name<<endl;
    cout<<"Address:"<<Address<<endl;
    cout<<"Roll:"<<roll<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"subjects:"<<endl;
    for(string sub :subject)
        cout<<sub<<endl;
    }

};

int main()
{
    history h("Maliha","Rangpur",30,23);
    h.subject.push_back("C++");
    h.subject.push_back("oop");
    history h2("Sumaiya","Rangpur",18,23);
     h2.subject.push_back("C");
    h2.subject.push_back("data structure");
    h.GetInfo();
    h2.GetInfo();





}
