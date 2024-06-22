#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //cout<<"X++/X-- ?"<<endl;
        cin>>s;
        if(s=="X++" || s=="++X")
        {
            x=x+1;
        }
        else if (s=="X--" || s=="--X")
        {
            x=x-1;
        }
    }
    cout<<x<<endl;
}
