#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
int main()
{
    int n,x;
    cin>>n;
    int a[1001]={0},b[n],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        a[b[i]]++;
        //cout<<a[b[i]]<<" ";
    }
    for(int i=0;i<=1000;i++)
    {
        if(a[i]!=0)
        c++;
    }
    cout<<c<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[b[i]]==1)
        cout<<b[i]<<" ";
        a[b[i]]--;
    }
}