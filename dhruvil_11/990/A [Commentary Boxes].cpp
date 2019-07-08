#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli n,m;
    lli max1,max2;
    int a,b;
    cin>>n;
    cin>>m;cin>>a;cin>>b;
   if(n%m==0)cout<<0;
   else
   {
    max1=(m-n%m)*a;
    max2=(n%m)*b;
    cout<<(max1<max2?max1:max2);
   }
}