#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);

        for(int i=0;i<n;i++)
           {
               cin>>a[i];
           }
        for(int i=0;i<n;i++)
           {
               cin>>b[i];
           }
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                swap(a[i],b[i]);
            }
        }
            int max1=*max_element(a.begin(),a.end());
            int max2=*max_element(b.begin(),b.end());

            if(a.back()== max1 && b.back()== max2)
            {
                cout<<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
    }
    return 0;
}
