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
    if(n<=2)
    {
        cout<<"No";
        return  0;
    }
    else
    {
        cout<<"Yes"<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<n-1<<" ";
        for(int i=1;i<=n-1;i++)
        cout<<i<<" ";
    }
}