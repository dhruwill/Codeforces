#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    ll n;
    cin>>n;
    ll i=1,j=n;
    for(int k=1;k<=n;k++)
    {
        if(k%2!=0)
        {
            cout<<i<<" ";
            i++;
        }
        else
        {
            cout<<j<<" ";
            j--;
        }
    }
}