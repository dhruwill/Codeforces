#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n;
    int a,b;
    cin>>n>>a>>b;
    n-=1;
    int c=0;
    if(a+b>n)
    {
        b-=(a+b-n);
    }
    while(b--)
    {
        c++;
    }
    cout<<c+1;
    
}
    