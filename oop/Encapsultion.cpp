#include<bits/stdc++.h>
using namespace std;
class history{
private:
    string name;
    string add;
    int sub_count;
    int roll;


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
        cout<<"practice in cricket"<<endl;
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


}



