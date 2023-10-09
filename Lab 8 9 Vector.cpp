#include<bits/stdc++.h>
using namespace std;
int Menu()
{
    int option;
    cout<<"***Main Menu***"<<endl;
    cout<<"1. Insert"<<endl;
    cout<<"2. Delete"<<endl;
    cout<<"3. Search"<<endl;
    cout<<"4. Display List"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"     Enter your Option: "<<endl;
    cin>>option;
    return option;
}

int sMenu()
{
    int option;
    cout<<"***Insert Sub Menu***"<<endl;
    cout<<"1. Insert At First "<<endl;
    cout<<"2. Insert At Last "<<endl;
    cout<<"3. Insert Before "<<endl;
    cout<<"4. Insert After "<<endl;
    cout<<"5. Exit "<<endl;
    cout<<"     Enter your Option: "<<endl;
    cin>>option;
    subMenu(option);
}
void subMenu(int x)
{
    int option;
    for (;;)
    {
        option = Menu();
        if (option == 5)
            break;
        switch (option)
        {
        case 1:
            //atFirst();
            break;
        case 2:
            //atLast();
            break;
        case 3:
            //inBefore();
            break;
        case 4:
            //inAfter();
            break;
        }
    }
}

int main()
{
    int option;
    for (;;)
    {
        option = Menu();
        if (option == 5)
            break;
        switch (option)
        {
        case 1:
            sMenu();
            break;
        case 2:
            //Delete();
            break;
        case 3:
            //Search();
            break;
        case 4:
            //Display();
            break;
        }
    }
    return 0;
}