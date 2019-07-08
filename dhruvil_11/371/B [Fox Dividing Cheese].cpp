#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define f first
#define s second
//vector< int > v[100000];
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
bool vis[1000000];
int coun=1;
//pair cq(ll a,ll b)

int main()
{
    IOS
    //n==1
    ll a,b;
    cin>>a>>b;
    //int b=0;
    ll a1[3]={0};
    ll b1[3]={0};
    while(1)
    {
        if(a%2==0)
        {
            a/=2;
            a1[0]++;
        }
        else
        break;
    }
    while(1)
    {
        if(a%3==0)
        {
            a/=3;
            a1[1]++;
        }
        else
        break;
    }
    while(1)
    {
        if(a%5==0)
        {
            a/=5;
            a1[2]++;
        }
        else
        break;
    }
    while(1)
    {
        if(b%2==0)
        {
            b/=2;
            b1[0]++;
        }
        else
        break;
    }
    while(1)
    {
        if(b%3==0)
        {
            b/=3;
            b1[1]++;
        }
        else
        break;
    }
    while(1)
    {
        if(b%5==0)
        {
            b/=5;
            b1[2]++;
        }
        else
        break;
    }
    if(a!=b)
    {
        cout<<"-1";
        return 0;
    }
    ll xx=0;
    for(int i=0;i<3;i++)
    xx+=abs(a1[i]-b1[i]);
    cout<<xx;
}