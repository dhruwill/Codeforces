#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    IOS
    int a,b,c,n;
    cin>>a>>b>>c>>n;
   if(n==0 || a>=n||c>=n||b>=n ||a<c||b<c)
   cout<<-1;
   else{
    if((c+n)-(a+b)<=0)
    cout<<-1;
    else
    cout<<(c+n)-(a+b);}
}