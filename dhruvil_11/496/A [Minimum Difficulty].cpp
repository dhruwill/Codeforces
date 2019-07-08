#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n;
    cin>>n;
    int a[n];int max=0;int i1,i2;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>=1)
        {
            if(max<a[i]-a[i-1])
            {max=a[i]-a[i-1];i1=i;i2=i-1;}
        }
    }max=100000;
    for(int i=1;i<n-1;i++)
    {
        int c=-1;
        for(int j=0;j<n-1;j++)
        {
            if(j==i)
            continue;
            if(j+1==i)
            {
                if(a[j+2]-a[j]>c)
                c=a[j+2]-a[j];
            }
            else
            {
                if(a[j+1]-a[j]>c)
                c=a[j+1]-a[j];
            }
        }
        if(max>c)
        max=c;
    }
    cout<<max;
}