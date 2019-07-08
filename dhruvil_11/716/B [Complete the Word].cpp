#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
vector< int > v[100000];
bool vis[100000];
int coun=1;
int main()
{
    string s;
    cin>>s;
    int c1=0,d=0;
    int a[26]={0};
    vector<char>v;
        v.clear();
        int x1=0,x2=0;
        //cout<<s.length()<<endl;
        if(s.length()<26)
        {
            cout<<-1;
            return 0;
        }
    for(int i=0;i<s.length()-25;i++)
    {
        x1=0;
        for(int j=0;j<26;j++)
        a[j]=0;
        for(int j=i;j<=i+25;j++)
        {
            if(s[j]!='?' && a[s[j]-'A']>0)
            {x1=1;
            //cout<<s[j]<<i<<endl;
            break;}
            else
            {
               if(s[j]!='?')
                a[s[j]-'A']++;
                
            }
        }
        //if(i==25)
        //cout<<i;
        //cout<<x1<<i<<endl;;
        if(x1==1)
        continue;
        for(int j=0;j<26;j++)
        if(a[j]==0)
        v.pb('A'+j);
        for(int j=i;j<=i+25;j++)
        if(s[j]=='?' && x2!=v.size())
        s[j]=v[x2++];
        break;
        
    }
    for(int i=0;i<s.length();i++)
    if(s[i]=='?')
    s[i]='A';
    if(x1==1)
    {
        cout<<"-1";
        return 0;
    }
    cout<<s;
}
    