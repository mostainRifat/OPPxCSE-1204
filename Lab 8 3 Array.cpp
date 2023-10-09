#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int,5>ax;
    ax={10,60,30,70,20};
    cout<<"Arrray : ";

    for(int x: ax)
        cout<<x<<" ";
    cout<<endl;

    cout<<"At Index 3:"<<ax.at(3)<<endl;
    cout<<"At Front : "<<ax.front()<<endl;
    cout<<"At Back : "<<ax.back()<<endl;
    ax.fill(7);
    cout<<"Is ax empty: "<<ax.empty()<<endl;
    cout<<"Size of ax : "<<ax.size()<<endl;
    cout<<"Maximum Size of ax :"<<ax.max_size()<<endl;
    cout<<"Address of First element : "<<ax.begin()<<endl;
    cout<<"Address of Last element : "<<ax.end()<<endl;
}