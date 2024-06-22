#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k;
    cin>>k;

    stack<int>st;
    queue<int>a;
    while(k--)
    {
        st.push(q.front());
        q.pop();
    }
    while(k--)
    {
        a.push(st.top());
        st.pop();
    }
    int n = q.size()-k;
    while(n--)
    {
        a.push(q.front());
        q.pop();
    }
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
}

