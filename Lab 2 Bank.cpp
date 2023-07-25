#include<bits/stdc++.h>
using namespace std;

class Bank{ 
private: 
    int id; 
    float amount; 
    static int n; 
public: 
    //write methods 
    Bank()
    {
        id = 0;
        amount = 0;        
    }

    Bank(int x,float a)
    {
        id = x;
        amount = a;
        n++;
    }

    Bank(Bank &p)
    {
        id = p.id;
        amount = p.amount;
        n++;
    }

    void setData(int x, float a )
    {
        id = x;
        amount = a;
        n++;
    }

    void changeData(float x)
    {
        amount += x;
    }

    int getN()
    {
        return n;
    }
    
    float getAmount()
    {
        return amount;
    }

    void display()
    {
        cout<<"id = "<<id<<endl;
        cout<<"amount = "<<amount<<endl;
        cout<<"Total Clients"<<n<<endl;
    }
};

int Bank::n=0;

int main()
{
    Bank b1(1,400);
    //b1.display();

    //Bank b2(b1);
    Bank b2(3,500);
    //b2.display();

    Bank b3;
    b3.setData(3,500);
    //b3.display();

    b3.changeData(100);
    //b3.display();

    Bank b4(4,200);
    Bank b5(5,450);

    float sum=0;
    sum += b1.getAmount();
    sum += b2.getAmount();
    sum += b3.getAmount();
    sum += b4.getAmount();
    sum += b5.getAmount();

    cout<<"totoal Amount = "<< sum<<endl;
    cout<<"Total Clients = "<<b3.getN()<<endl;

}
