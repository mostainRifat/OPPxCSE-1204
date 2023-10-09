#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    int x = 100;

protected:
    int y = 200;

public:
    int z = 300;

    int getx()
    {
        return x;
    }
};

class B : public A
{
    // All the elements of A is acceable in B for inheritence
public:
    void AElement()
    {
        cout<<"Class A --> x: "<<getx()<<endl;
        cout<<"Class A --> y: "<<y<<endl;
        cout<<"Class A --> z: "<<z<<endl;
    }
};

int main()
{
    B b;
    b.AElement();
    // call methods of class B
    return 0;
}