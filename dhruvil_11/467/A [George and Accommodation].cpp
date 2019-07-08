#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n;
    cin>>n;
    int c=0;
    int a,b;
    while(n--)
    {
        cin>>a>>b;
        if(b-a>=2)
        c++;
    }
    cout<<c;   
}