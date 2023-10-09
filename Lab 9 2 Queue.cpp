#include <bits/stdc++.h>
using namespace std;
queue<int>q;
int Menu()
{
    int option;
    cout<<"***QUEUE***"<<endl;
    cout<<"1. Add Element(PUSH)"<<endl;
    cout<<"2. Remove Element(POP)"<<endl;
    cout<<"3. Front Element"<<endl;
    cout<<"4. Back Element"<<endl;
    cout<<"5. Size of the Queue"<<endl;
    cout<<"6. Exit"<<endl;
    cout<<"Enter your option: ";
    cin>>option;
    return option;
}
void Push()
{
    int val;
    cout<<"Enter a value: ";
    cin>>val;
    q.push(val);
    cout<<"Element Added successfully.."<<endl;
}
void Pop()
{
    if(!q.empty())
    {
        q.pop();
        cout<<"Element Popped successfully..."<<endl;
    }
    else
    {
        cout<<"Queue is Empty"<<endl;
    }
}
void Front()
{
    if(!q.empty())
    {
        cout<<"Front Element: "<<q.front()<<" ";
        q.pop();
    }
    else
    {
        cout<<"Queue is Empty.."<<endl;
    }
    cout<<endl;
}
void Back()
{
    if(!q.empty())
    {
        cout<<"Back Element: "<<q.back()<<endl;
    }
    else
    {
        cout<<"Queue is Empty.."<<endl;
    }
    cout<<endl;
}
void Size()
{
    cout<<"Size of the Queue: "<<q.size()<<endl;
}
int main ()
{
    int option;
    for(;;)
    {
        option=Menu();
        if(option==6)
            break;
        switch(option)
        {
            case 1: Push(); break;
            case 2: Pop(); break;
            case 3: Front(); break;
            case 4: Back(); break;
            case 5: Size(); break;
        }
    }
}