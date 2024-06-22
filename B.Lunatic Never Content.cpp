#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);

bool ispalindrome(vector<long long int>v)
{
    long long int n = v.size();
    vector<long long int>r;
    r.insert(r.end(),v.begin(),v.end());
    reverse(v.begin(),v.end());
    if(r == v)
        return 1;
    else return 0;

}

bool allEqual(std::vector<long long int> const &v) {
    return adjacent_find(v.begin(), v.end(), not_equal_to<long long int>()) == v.end();
}

int main()
{
    opt();
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<long long int>v(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        if(v.size()==1)
            cout<<"0"<<endl;

        else
        {
            if(allEqual(v))
            {
                cout<<"0"<<endl;
            }

            else
            {
                vector<long long int>v2(n);
                long long int x = *max_element(v.begin(),v.end());
                for(long long int i=x;i>0;i--)
                {
                    for(long long int j=0;j<n;j++)
                  {
                    v2[j]= v[j]%i;
                  }

                  if(ispalindrome(v2))
                  {
                      cout<<i<<endl;
                      break;
                  }
                }
            }
        }

    }

}
