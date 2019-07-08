#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
   int n,k;
   cin>>n>>k;
   for(int i=k+1;i>=1;i--)
   cout<<i<<" ";
   for(int i=k+2;i<=n;i++)
   cout<<i<<" ";
}