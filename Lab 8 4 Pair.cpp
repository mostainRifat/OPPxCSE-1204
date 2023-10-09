#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string>a,b;
    a={10,"Rajshashi"};
    cout<<"a-->First Data int: "<<a.first<<endl;
    cout<<"a-->Second Data string: "<<a.second<<endl;
    
    b= {30,"Rangpur"};
    swap(a,b);
    cout<<"After Swapping"<<endl;
    cout<<"a-->First Data int: "<<a.first<<endl;
    cout<<"a-->Second Data string: "<<a.second<<endl;
    
}