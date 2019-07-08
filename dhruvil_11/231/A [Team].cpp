#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    int n;
    cin>>n;
    int d=0;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        if(a[i]+b[i]+c[i]>=2)
            d++;
    }
    cout<<d;

}
