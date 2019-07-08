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
    int a[n+1];
    int max=0,min=101,ma=0,mi=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
            ma=i;
        }
        if(a[i]<=min)
        {
            min=a[i];
            mi=i;
        }
    }
    if(max==min)
    {
        cout<<"0";
        return 0;
    }
    else
    {
        if(ma<mi)
        {
            cout<<ma-1+n-mi;
        }
        else
        {
            cout<<ma-2+n-mi;
        }
    }
}