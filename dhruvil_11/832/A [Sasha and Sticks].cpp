#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define max 1000000007
int main()
{
    ll n,k;
    cin>>n>>k;
    
    if(n==k)
    cout<<"YES";
    else
    {
        if(n%k==0)
        {
            if((n/k)%2==0)
            cout<<"NO";
            else
            cout<<"YES";

        }
        else
        {
             if((n/k)%2==0)
            cout<<"NO";
            else
            cout<<"YES";
            
        }
    }
}