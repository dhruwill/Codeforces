#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    IOS
    int n,k;
    cin>>n>>k;
    int a[n],i;
    vector<int> v;
    int c[101]={0};
    if(n<k)cout<<"NO";
    else{
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        c[a[i]]++;
        if(c[a[i]]-1==0)
       { v.push_back(i+1);
       //cout<<a[i]<<" ";
       }
    }
    //cout<<endl;
    if(v.size()<k)
    cout<<"NO";
    else
    {
        cout<<"YES"<<endl;
        for(i=0;i<k;i++)
        cout<<v[i]<<" ";
    }
    }
}