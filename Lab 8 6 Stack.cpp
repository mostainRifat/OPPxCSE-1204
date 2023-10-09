#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    st.push(5);
    st.push(7);
    st.push(12);
    st.push(18);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}