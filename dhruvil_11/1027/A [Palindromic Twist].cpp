#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    int t;
    cin>>t;
    int n;
    string s;
    while(t--)
    {
        cin>>n>>s;int d=0;
        for(int i=0;i<n/2;i++)
        {
            if(abs(s[i]-s[n-i-1])!=2 && abs(s[i]-s[n-i-1])!=0)
            {
                cout<<"NO"<<endl;
                d=1;
               break;
            }
        }
        if(d==0)
        cout<<"YES"<<endl;
    }
}