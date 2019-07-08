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
    int a,n;
    cin>>a>>n;
    string s;
    cin>>s;
    while(n--)
    {
        for(int i=0;i<a-1;i++)
        {if(s[i]=='B'&& s[i+1]=='G')
        {
            char x=s[i];
            s[i]=s[i+1];
            s[i+1]=x;i++;
        }}
    }
    cout<<s;
}
    