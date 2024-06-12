#include<bits/stdc++.h>
using namespace std;
class history{
private:

    string add;
    int sub_count;
    int roll;
protected:
    string name;

public:
    history(string NAME, string ADD,int ROLL)
    {
        name=NAME;
        add=ADD;
        roll= ROLL;
        sub_count=0;

    }
     void GetInfo()
    {
    cout<<"Name:"<<name<<endl;
    cout<<"Address:"<<add<<endl;
    cout<<"Roll:"<<roll<<endl;
    cout<<"count:"<<sub_count<<endl;

    }
    void sub_cnt()
    {

        sub_count++;

    }

};

class Cricket_history: public history
{
public:
    Cricket_history(string Name,string Add,int Roll): history(Name,Add,Roll)//hsitory te pass kore dicchi
    {
    }
    void practice()
    {
        cout<<name<<" is practice in cricket"<<endl;
    }

};

class football_history: public history       ///football derived class,history base class
{
public:
    football_history(string Name,string Add,int Roll): history(Name,Add,Roll)//hsitory te pass kore dicchi name add roll
    {
        ///ekhane ekta class arekta class ke inherit korche...
    }
    void practice()
    {
        cout<<name<<" is practice in football"<<endl;
    }

};


int main()
{
     history h("Maliha","Rangpur",30);

    h.sub_cnt();
    h.sub_cnt();
    h.GetInfo();
    Cricket_history ch("Musfiqur","Bogura",15);
    ch.GetInfo();
    ch.practice();
    football_history f("Messi","Argentina",10);
    f.GetInfo();
    f.practice();

}


///ekhane practice same function but duita different class e different name er person ke show korteche...That is called
///polymorphism. where same name function perform different task.

