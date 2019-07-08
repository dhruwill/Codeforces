#include<bits/stdc++.H>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    ll a[n];
    cin>>a[0];
    ll min=a[0],max=a[0];
    ll c1=1,c2=1;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            c2=1;
            max=a[i];
        }
    else    if(a[i]==max)
        c2++;
        if(a[i]<min)
        {
            c1=1;
            min=a[i];
            
        }
        
     else   if(a[i]==min)
        c1++;
    }
    cout<<max-min<<" ";
    if(max==min)
    cout<<(c1*(c1-1))/2;
    else
    cout<<c1*c2;
}