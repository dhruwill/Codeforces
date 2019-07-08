#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
vector< int > v[100000];
bool vis[1000000];
int coun=1;
int main()
{
    string s,s1;
    cin>>s>>s1;
    int a[10]={0},b[10]={0};
    int x = 1000000;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='6'||s[i]=='9')
        a[6]++;
        else if(s[i]=='2'||s[i]=='5')
        a[2]++;
        else
        a[s[i]-48]++;
    }
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='6'||s1[i]=='9')
        b[6]++;
        else if(s1[i]=='2'||s1[i]=='5')
        b[2]++;
        else
        b[s1[i]-48]++;
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]!=0)
        x=min(x,b[i]/a[i]);
    }//if(x==1000000)
    //cout<<0;
    //else
    cout<<x;
    
}
    