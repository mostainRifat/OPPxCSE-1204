#include <bits/stdc++.h>
using namespace std;
int main()
{
    tuple<int, string, double> a,b;
    a = make_tuple(100, "Kamal", 3.5);
    cout<< "int Data-->" << get<0>(a)<<endl;
    cout<< "string Data-->" << get<1>(a)<<endl;
    cout<< "double Data-->" << get<2>(a)<<endl;

    b = make_tuple(200, "damal", 87.5);
    swap(a,b);
}