#include <bits/stdc++.h>
using namespace std;
stack<int> st;
int Menu()
{
    int option;
    cout << "***Stack Menu***" << endl;
    cout << "1. Add Element(PUSH)" << endl;
    cout << "2. Remove Element(POP)" << endl;
    cout << "3. Show value" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your Option: ";
    cin >> option;
    return option;
}
void Push()
{
    int val;
    cout << "Enter a value: ";
    cin >> val;
    st.push(val);
    cout << "Element added successfully..." << endl;
}
void Pop()
{
    if (!st.empty())
    {
        st.pop();
        cout << "Element removed successfully..." << endl;
    }
    else
    {
        cout << "Stack is empty" << endl;
    }
}
void Display()
{
    if(st.empty())
    {
        cout<<"Stack is Empty"<<endl;
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    int option;
    for (;;)
    {
        option = Menu();
        if (option == 4)
            break;
        switch (option)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Display();
            break;
        }
    }
    return 0;
}