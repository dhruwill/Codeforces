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
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector< int >v;
    ll ans=0;
    if(n==1)
    {
        cout<<0<<endl;
        cout<<s;
        return 0;
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='R')
            v.pb(1);
        if(s[i]=='B')
            v.pb(2);
        else if(s[i]=='G')
            v.pb(3);
    }
    for(int i=1;i<(int)v.size()-1;i++)
    {
        if(v[i]==v[i-1] && v[i+1]!=v[i])
            {v[i]=6-v[i]-v[i+1];ans++;}
        else if(v[i]==v[i-1] && v[i]==v[i+1])
            {v[i]=(v[i]+1)%3;ans++;
                if(v[i]==0)
                    v[i]=3;}

    }

    if(v[v.size()-1]==v[v.size()-2])
    {
        
            if(v[v.size()-2]==1)
                v[v.size()-1]=2;
            if(v[v.size()-2]==2)
                v[v.size()-1]=1;
            if(v[v.size()-2]==3)
                v[v.size()-1]=1;
        ans++;

    }
    cout<<ans<<endl;
    for(int i=0;i<(int)v.size();i++)
    {
        if(v[i]==1)
            cout<<"R";
        if(v[i]==2)
            cout<<"B";
        else if(v[i]==3)
            cout<<"G";
    }

}