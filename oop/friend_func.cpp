#include<bits/stdc++.h>
using namespace std;
class square{
private:
    float a;
    float area;
public:
    void setA(float length)
    {
        a=length;
        area=a*a;
    }
    friend void printFunc(square);
};
void printFunc(square s)
{
    cout<<"Length:"<<s.a<<endl;
    cout<<"Area:"<<s.area<<endl;
}
int main()
{
    square s;
    s.setA(3);
    printFunc(s);
}
