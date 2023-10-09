#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(5);
    q.push(7);
    q.push(12);
    q.push(18);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}