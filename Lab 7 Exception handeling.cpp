#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int ax[5] = {10, 20, 60, 40, 30};
    cout << "enter index:";
    cin >> i;
    try
    {
        if (i >= 0 && i < 5)
        {
            cout << "ax[" << i << "]=" << ax[i] << endl;
        }
        else
        {
            throw i;
        }
    }
    catch (int x)
    {
        cout << x<< "'th element is not in the array" << endl;
    }
    catch (string st)
    {
        cout<< "String , Out of Range Error"<<endl;
    }
    catch (...)
    {
        cout << "Default catch" << endl;
    }
    return 0;
}