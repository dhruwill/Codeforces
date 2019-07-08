#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define eb emplace_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n;
    string s;
    cin>>n>>s;
    int a[26]={0};
    if(n==1)
    {
        cout<<"YES";
        return 0;
    }

    
    for(int i=0;i<s.length();i++)
    {
        a[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]>=2)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    
}