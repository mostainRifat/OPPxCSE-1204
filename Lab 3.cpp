#include <bits/stdc++.h>
using namespace std;

class Test
{
    int n;
public:
    Test()
    {
        n =0;
        cout<<"Constructor is Called"<<endl;
    }

    ~Test()
    {
        cout<<"Distuctor is Called"<<endl;
    }

    void show()
    {
        cout<<"N= "<<n<<endl;
    }
};

int Test:: m=0;

int main()
{
    system("cls");
    Test t;
    t.show();

}