#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    int x=101;

protected:
    int y=102;

public:
    int z=103;
};

class B
{
private:
    int p=201;
protected:
    int q=202;
public:
    int r=203;
};

class C : public A,B
{
    // write public method to accessx,y,z,p,q & r
public:
    void AElement()
    {
        //cout<<"Class A --> x: "<<x;
        cout<<"Class A --> y: "<<y<<endl;
        cout<<"Class A --> z: "<<z<<endl;
    }
    void BElement()
    {
        //cout<<"Class B --> p: "<<p;
        cout<<"Class B --> q: "<<q<<endl;
        cout<<"Class B --> r: "<<r<<endl;
    }
};

int main()
{
    C c;
    // call methods of class C
    c.AElement();
    c.BElement();

    return 0;
}