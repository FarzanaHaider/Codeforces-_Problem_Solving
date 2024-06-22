#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Unique Function
    vector<int>v = {2,3,5,5,7,7,1};
    sort(v.begin(),v.end());
    int sz = unique (v.begin(),v.end())-v.begin();
    cout<<sz<<endl;
    cout<<"Unique Numbers are: ";
    for(int i=0;i<sz;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //Max Element or Min Element
    vector<int>:: iterator it = max_element(v.begin(),v.end());
    cout<< " Max Number : "<<*it <<endl;

    cout<<"From 1 index to (before)4 index maximum number is : ";
    it = max_element(v.begin()+1,v.begin()+4);
    cout<< *it <<" ";

    int n = max_element(v.begin()+1,v.end())-v.begin();
    cout<<"Index: "<<n<<endl;
    cout<<endl;

    cout<<"Nested Vector"<<endl;
    vector<vector <int> >v1;

    vector<int>a1={2,3,4};
    vector<int>a2={2,3,4,5,6};

    v1.push_back(a1);
    v1.push_back(a2);

    for(auto u: v1)
    {
        for (auto g: u)
            cout<<g<<" ";
        cout<<endl;
    }

    return 0;
}

