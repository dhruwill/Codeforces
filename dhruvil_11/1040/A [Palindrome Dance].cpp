#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    int n,a[2];
    cin>>n>>a[0]>>a[1];
    int s[n];
    for(int i=0;i<n;i++)
    cin>>s[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if((s[i]==0 && s[n-1-i]==1) || (s[i]==1 && s[n-1-i]==0))
        {
            cout<<-1;
            return 0;
        }
        if(s[i]==0 || s[i]==1)
        continue;
        if(s[i]==2)
        {
            if(s[n-1-i]!=2)
            {
                sum+=a[s[n-1-i]];
                s[i]=s[n-1-i];
            }
            else
            {
                sum+=min(a[0],a[1]);
                s[i]=a[0]>a[1]?1:0;
               // cout<<s[i]<<endl;
            }
        }
       // cout<<sum<<endl;
    }
    cout<<sum;
}