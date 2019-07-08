#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n;
    cin>>n;
    if(n%3==0)
    cout<<n-2<<" "<<1<<" "<<1;
    else
    cout<<1<<" "<<2<<" "<<n-3;
   return 0;
}