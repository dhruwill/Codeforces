#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
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
    int p[4];
    int a,b;
    for(int i=0;i<4;i++)
        cin>>p[i];
    cin>>a>>b;
    sort(p,p+4);
    if(p[0]<=a)
    {
        cout<<0;
        return 0;
    }
        if(p[0]<=b)
        cout<<p[0]-a;
    else
    {
        cout<<b-a+1;
    }
    
}