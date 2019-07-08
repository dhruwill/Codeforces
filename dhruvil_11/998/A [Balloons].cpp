#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    IOS
    ll n;
    cin>>n;
    ll a[n];
    ll i;


    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i!=0)
        a[i]+=a[i-1];

    }
    if(n==1)cout<<-1;
   else if(n==2 && a[1]==2*a[0])cout<<-1;
    else{
            if(a[0]!=a[n-1]-a[0])cout<<1<<endl<<1;
            else if(n>2 && a[1]!=a[n-1]-a[1])cout<<2<<endl<<1<<" "<<2;}

}

