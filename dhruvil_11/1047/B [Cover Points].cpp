#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n;
    cin>>n;
    int max=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a+b>max)
        max=a+b;
        
    }
    cout<<max;
   return 0;
}