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
    string s;
    cin>>s;
    string s1="";
    //int c=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='[' || s[i]==':' || s[i]=='|' || s[i]==']')
        s1+=s[i];
        
    }
    int i1=-1,i2=0;
    for(int i=0;i<s1.length();i++)
    if(s1[i]=='[')
    {
        i1=i;
        break;
    }
    for(int i=i1+1;i<s1.length();i++)
    {
        if(s1[i]==':')
        {
            i2=i;
            break;
        }
        
    }
    int i3=0,i4=0;
    for(int i=s1.length()-1;i>=0;i--)
    {
        if(s1[i]==']')
        {
            i3=i;
            break;
        }
        
    }
    for(int i=i3-1;i>=0;i--)
    {
        if(s1[i]==':')
        {
            i4=i;
            break;
        }
        
    }
    ll c=0;
    for(int i=i2+1;i<i4;i++)
    if(s1[i]=='|')
    c++;
   //cout<<i1<<" "<<i2<<" "<<i3<<" "<<i4;
    if(i1!=-1 && i2>0 && i3!=0 && i3>i1 && i4!=0 && i4<i3 && i4!=i2 && i4>i2 )
    cout<<4+c;
    else
    cout<<-1;
}