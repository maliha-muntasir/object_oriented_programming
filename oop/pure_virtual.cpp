#include<bits/stdc++.h>
using namespace std;
class instrument{
public:
    virtual void makesound()
    {
       cout<<"Instrument playing."<<endl;

    }
};

class accordion: public instrument
{
    public:
    void makesound()
    {
       cout<<"accordion playing."<<endl;
    }
};


class piano: public instrument
{
    public:
    void makesound()
    {
       cout<<"piano playing."<<endl;
    }
};

int main()
{
    instrument* it1=new accordion(); ///etar mane holo jokhn amar derived class thakbe seta age print hbe,na thakle pure
                                    ///virtual class er print hbe.pointer create kor holo
     instrument* it2=new piano();
    instrument* instruments[3]={it1,it2};
    for(int i=0;i<2;i++)
    {
        instruments[i]->makesound();
    }

///abstraction cmplx details hide kore from end user er kache..


}
