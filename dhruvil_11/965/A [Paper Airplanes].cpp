#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    IOS
    float n,s;int k,p;
    cin>>k>>n>>s>>p;
    ll a;
    if(ceil(n/s)!=0)
     a=k*ceil(n/s);
    else
     a=k;
    // cout<<a<<" "<<ceil(3/2)<<" ";
    if(a%p==0)
    cout<<a/p;
    else
    cout<<(a/p+1);
}