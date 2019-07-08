#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios__sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],j=0,i,sum=0,c=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {c++;
        b[j]=i;
        j++;}
    }
    cout<<c<<endl;
    for(i=0;i<j;i++)
    {
        if(i!=j-1)
        cout<<b[i+1]-b[i]<<" ";
        else
        cout<<n-b[j-1];
    }
}