#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define p 1000000007
ll power( ll y) 
{ 
    ll res = 1;      // Initialize result 
    ll x= 2;
    // = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y%2==1) 
            res = ((res%p)*(x%p)) % p; 
  
        // y must be even now 
        y/=2; // y = y/2 
        x = ((x%p)*(x%p)) % p;   
    } 
    return res%p; 
} 
int main()
{
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>a[i][j];
 //   int m1=1000000;
    int r[n];
    for(int i=0;i<n;i++)
    {
        int x=0,f=1;
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='G')
            f=0;
            else if(!f)
            {
                x++;
                if(a[i][j]=='S')
                {f=2;break;}
            }
        }
        if(x==0 || f!=2)
        {
            cout<<-1;
            return 0;
        }
        r[i]=x;
     //   cout<<r[i]<<" ";
    }
    int x=0;
    sort(r,r+n);
    for(int i=0;i<n;i++)
    {
        //cout<<r[i]<<" ";
        if(r[i]!=0)
        {
            x++;
           // cout<<r[i]<<" ";
            for(int j=i+1;j<n;j++)
            r[j]-=r[i];
        }
    }
    cout<<x;
}