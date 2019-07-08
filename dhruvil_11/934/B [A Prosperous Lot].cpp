#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll k;
    cin>>k;
    string s;
    if(k>36)
    cout<<-1;
    else
    {
        for(ll i=1;i<=(k/2);i++)
        s+='8';
        if(k%2==0)
        cout<<s;
        else
        cout<<s+'6';
    }
}