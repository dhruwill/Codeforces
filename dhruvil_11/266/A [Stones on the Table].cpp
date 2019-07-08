#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        a++;
    }
    cout<<a;
}