#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int c[100000];
int main()
{
    IOS
   int n,m;
   cin>>n>>m;
   int b[m+1];
   for(int i=1;i<=m;i++)
   cin>>b[i];
   vector< pair< int ,int> >v;
   for(int i=0;i<n;i++)
   v.pb({i+1,0});
   for(int i=1;i<=m;i++)
   {
       for(int j=b[i];j<=n;j++)
       {
           if(v[j-1].second==0)
           v[j-1].second=b[i];
       }
   }
   for(int i=0;i<v.size();i++)
   cout<<v[i].second<<" ";
   
   
   
   
}