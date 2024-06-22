//Given an integer array and a non-negative integer k,
//count all distinct pairs with difference equal to k, i.e., A[ i ] - A[ j ] = k

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'

int main()
{
    optimize();
    int t;
    cin>>t;
    int a[100];

    while(t--)
    {
        int k;
        int n;
        cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    vector<pair<int,int>>v;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(i!=j && a[i]-a[j]==k)
	            {
	                v.push_back({a[i],a[j]});
	            }
	        }
	    }
	    sort(v.begin(),v.end());
	    int sz = unique(v.begin(),v.end())-v.begin();
	    cout<<sz<<endl;
    }
}
