#include <bits/stdc++.h>
using namespace std;

class Member
{
private:
    string name;
    string MNum;
    int amount;
    int pin;

public:
    Member(string n, double amt, int p, string &mobile)
    {
        MNum = mobile;
        name = n;
        amount = amt;
        pin = p;
    }
};

void FirstPage()
{
    int op;
    cout << "*** MyCash Login** " << endl;
    cout << "1. Login" << endl;
    cout << "2. Register " << endl;
    cout << "3. Exit " << endl;
    cout << "Enter Your Option: ";
    cin >> op;
    /* if(op == 1)
        login();
    else if (op == 2)
        Registar(); */
    if (op >= 3 )
        FirstPage();  
}

int Register()
{
    int k , otp , x;
    cout<<"Enter Mobile No. ";
    cin>>Member.number;
    cout<<endl<<"Enter Name: ";
    cin>>Member.name;
    cout<<endl<<"Enter pin:(5 digits) ";
    cin>>Member.p;
    cout<<endl<<"Reconfirm pin: ";
    cin>>k;
    if(k != Member.p)
    {
        cout<<endl<<"Wrong pin \nRegistration Failed";
        return Register();
    }
    // Genarate otp
    // cout <<endl<< "myCash Otp :" << otp;
    cout<<endl<<"Enter OTP : ";
    cin>>x;
    if(x!= otp)
    {
        cout<<endl<<"Invalid OTP \nRegistration Failed";
        return Register();
    }
    cout<<"Registration is Successful "<<endl<<"Press any key go to main menu..... ";
    cin>>x;
    menu();    
}

int menu()
{
    int op;
    system("cls");
    cout << "********** MyCash Menu ********" << endl;
    cout << "1. Update Me" << endl;
    cout << "2. Remove Me" << endl;
    cout << "3. Send Money" << endl;
    cout << "4. Cash-in" << endl;
    cout << "5. Cash-out" << endl;
    cout << "6. Pay Bill" << endl;
    cout << "7. Check Balance" << endl;
    cout << "8. History " << endl;
    cout << "9. Logout" << endl;
    cout << "Enter Your Option (1-9):";
    cin >> op;
    return (op);
}
int main()
{
    cout<< FirstPage();
}