#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    cin>>n>>x;
    ll sum=0,t=1;
   // vector < pair <int ,int> >v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
       
            int r = (a - t) / x;
            t += r*x;
            sum += b - t + 1;
            t = b+1;
        }
        cout<<sum;
}
        