#include<bits/stdc++.h>
using namespace std;

# define optimize() ios_base::sync_with_stdio(0);cin.tie;cout.tie;
# define endl '\n'

int main()
{
    int n;
    cin>>n;
    int x;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
   if(s.size() == 1)
    cout<<"NO"<<endl;
   else{
    cout<< *(++s.begin())<<endl;
   }
}
