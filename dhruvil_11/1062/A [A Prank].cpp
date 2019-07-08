#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
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
    int a[n+2];
    a[0]=1;
    a[n+1]=1000;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int ans=0,cnt=0;
    if(n==2 && a[n-1]==999)
    {
        cout<<1;
        return 0;
    }
    for(int i=1;i<=n-1;i++)
    {
        cnt=0;
        for(int j=i;j<=n;j++)
        {
            if(i==1)
            {
                int ct=1;
                int flag=1;
                for(int k=i;k<=j+1;k++)
                {
                    if(a[k]==ct)
                    {
                        ct++;
                    }
                    else
                        flag=0;
                }
                if(flag==1)
                {
                    ans=max(ans,(j-i+1));
                }

            }
            if(i>1 && i<n)
            {
                int ct=a[i-1]+1;
                int flag=1;
                for(int k=i;k<=j+1;k++)
                {
                    
                    if( k==n+1 && a[n]==999)
                        flag=0;
                    if(a[k]==ct)
                    {
                        ct=min(1000,ct+1);
                    }
                    else
                        flag=0;
                }
                
                if(flag==1)
                {
                    ans=max(ans,(j-i+1));
                }
               
            }
        }

    }
    if(a[n-1]==999 && a[n]==1000)
        ans=max(ans,1);
    cout<<ans;
}