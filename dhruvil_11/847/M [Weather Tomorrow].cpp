#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    int t[n];
    for(int i=0;i<n;i++)
    cin>>t[i];
    int  x=t[1]-t[0];
    if(n==2)
    {
        cout<<t[1]+x;
        return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(t[i]-t[i-1]!=x)
        {
            cout<<t[n-1];
            return 0;
        }
    }
    cout<<t[n-1]+x;
}