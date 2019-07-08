#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define f first
#define s second
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    IOS
    //n==1
    ll q;
    cin>>q;
    while(q--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a!=d)
        cout<<a<<" "<<d<<endl;
        else if(b!=c)
        cout<<b<<" "<<c<<endl;
        else if(a!=c)
        cout<<a<<" "<<c<<endl;
        else if(b!=d)
        cout<<b<<" "<<d<<endl; 
    }
    
}