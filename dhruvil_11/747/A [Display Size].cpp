#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    int n;
    cin>>n;
    for(int i=sqrt(n);i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<i<<" "<<n/i;
            return 0;
        }
    }

}