#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int x1=0,x2=0,x3=0;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        x1+=a;
        x2+=b;
        x3+=c;
    }
    if(x1==0 && x2==0 && x3==0)
    cout<<"YES";
    else
    cout<<"NO";
}