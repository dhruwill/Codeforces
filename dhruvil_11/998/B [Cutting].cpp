#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    IOS
    ll n,i,b;
    cin>>n>>b;
    ll a[n],o=0,e=0,c=0;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        e++;
        else
        o++;
        if(o==e)
        {
            if(i!=0 && i!=n-1)
            {
                v.push_back(abs(a[i]-a[i+1]));
            }
        }
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        if(b-v[i]>=0)
        {
            c++;
            b-=v[i];
        }
        else break;
    }
    cout<<c;
}
