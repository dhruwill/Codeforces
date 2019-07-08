#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    ll a[n],b[n],min,max;
    cin>>a[0]>>b[0];
    min=a[0];max=b[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]<min )
        min=a[i];
        if(b[i]>max)
        max=b[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==min && b[i]==max)
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
}