#include <bits/stdc++.h>
using namespace std;

class Father
{
private:
    int money = 100;
protected:
    int gold = 500;
public:
    int land = 700;
};

class Son : protected Father
{
public:
    void sWealth()
    {
        // cout<<"Son's Money : "<<money<<endl;
        cout << "Son--> Gold : " << gold << endl;
        cout << "Son--> Land : " << land << endl;
    }
};

class Grandson : private Son
{
public:
    void gWealth()
    {
        // cout<<"Grandson's Money : "<<money<<endl;
        cout<<"Grandson--> Gold : "<<gold<<endl;
        cout<<"Grandson--> Land : "<<land<<endl;
    }
};

int main()
{
    Son A;
    A.sWealth();
    Grandson B;
    B.gWealth();
    return 0;
}