#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

struct Member
{
    int id;
    float height;
    float weight;
    bool exists;
};

struct Member mx[10000];
int total = -1;

int searchMember(int y)
{
    int i;
    int flag = 0;
    for (i = 0; i <= total; i++)
        if (mx[i].id == y)
            flag = i;
    return flag;
}

int menu()
{
    int op;
    system("cls");
    cout << "********** Main Menu ********" << endl;
    cout << "1. Add Member" << endl;
    cout << "2. Update Member" << endl;
    cout << "3. Remove Member" << endl;
    cout << "4. Max Height & Weight" << endl;
    cout << "5. Min Height and Weight" << endl;
    cout << "6. Average Height and Weight" << endl;
    cout << "7. BMI Classification" << endl;
    cout << "8. Display" << endl;
    cout << "0. Exit";
    cout << "Enter Your option(0-8): ";
    cin >> op;
    return (op);
}

void addMember()
{
    cout << " addMember() Under construction" << '\n';
    total++;
    cout << "Enter ID : ";
    cin >> mx[total].id;
    cout << "Enter height :";
    cin >> mx[total].height;
    cout << "Enter weight :";
    cin >> mx[total].weight;
    mx[total].exists = 1;
    cout << "Member added successfully";

    getch();
}

void updateMember()
{
    int x, idx , nheight, nweight;
    cout << " Enter member ID :" << '\n';
    cin >> x;
    idx = searchMember(x);
    if (idx < 0)
        cout << "Sorry , Member Not Found ......";
    else
    {
        cout<<"Member is Updating......";
        cout<<"Enter New Height of the Member :";
        cin>> nheight;
        cout<<"Enter New Weight of the Member :";
        cin >> nweight;
        mx[x].height = nheight;
        mx[x].weight = nweight;
    }
    getch();
}

void removeMember()
{
    int x, idx;
    cout << " Enter member ID :" << '\n';
    cin >> x;
    idx = searchMember(x);
    if (idx < 0)
        cout << "Sorry , Member Not Found ......";
    else
    {
        cout << "Member to be removed " << endl;
        cout << mx[idx].id << " " << mx[idx].height << " " << mx[idx].weight << endl;
        cout << "Member remooved xD";
    }

    getch();
}

void display()
{
    cout << " ID Height Weight";
    int i;
    for (i = 0; i < total; i++)
        if (mx[i].exists)
            cout << mx[i].id << " " << mx[i].height << " " << mx[i].weight << endl;
}

void maxHeightWeight()
{
    int maxH = 0 , maxW =0;

    for(int i =0 ; i<=total;i++ )
    {
        if(maxH < mx [i].height)
        maxH = mx[i].height;
        
        if(maxW  < mx[i].weight)
        maxW = mx[i].weight;
    }
    cout<<"Max Height = "<<maxH<<endl;
    cout<<"Max Weight = "<<maxW<<endl;
}

void minHeightWeight()
{
    int minH = 99999 , minW =99999;

    for(int i =0 ; i<=total;i++ )
    {
        if(minH > mx [i].height)
        minH = mx[i].height;
        
        if(minW  > mx[i].weight)
        minW = mx[i].weight;
    }
    cout<<"Min Height = "<<minH<<endl;
    cout<<"Min Weight = "<<minW<<endl;
}

void avarage()
{
    int avH =0 , avW= 0;
    for(int i= 0 ; i<= total;i++)
    {
        avH += mx[i].height;
        avW += mx[i].weight;
    }
    cout<<"Avarage Height : "<< (avH/total) ;
    cout<<"Avarage Weight : "<< (avW/total) ;
}

void bmi()
{
    int ids;
    cout<< "Enter Member ID :";
    cin>> ids;
    
    int bmi = mx[ids].weight / ( mx [ids].height * mx[ids].height);
    cout<<"BMI of Member of ID->"<< ids <<": " << bmi << endl << "Classification: ";

    if (bmi < 16)
        cout<< "Severe Thinness";
    else if (bmi < 17)
        cout<< "Moderate Thinness";
    else if (bmi < 18.5)
        cout<< "Mild Thinness";
    else if (bmi < 25)
        cout<< "Normal";
    else if (bmi < 30)
        cout<< "Overweight";
    else if (bmi < 35)
        cout<<"Obese Class I";
    else if (bmi < 40)
        cout<<"Obese Class II";
    else
        cout<<"Obese Class III";
}

int main()
{
    int option;
    for (;;)
    {
        option = menu();
        cout << "in main() option =" << option << '\n';
        if (option == 0)
        {
            cout << "End of Program Run.........";
            break;
        }
        switch (option)
        {
        case 1:
            addMember();
            break;
        case 2:
            updateMember();
            break;
        case 3:
            removeMember();
            break;
        case 4:
            maxHeightWeight();
            break;
        case 5:
            minHeightWeight();
            break;
        case 6:
            avarage();
            break;
        case 7:
            bmi();
            break;
        case 8:
            display();
            break;
        }
        getch();
    }

    return 0;
}