#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n,d,m;
    cin>>n>>d;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }cin>>m;
    sort(a,a+n);
    if(m<n)
    {sum=0;
        for(int i=0;i<m;i++)
        sum+=a[i];
    }
    if(m>n)
    cout<<sum-(m-n)*d;
    else
    cout<<sum;
}