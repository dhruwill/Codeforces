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
    int a[n],b=0,c=0;
    string s="";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==5)
        b++;
        else
        c++;
    }
    if(c==0)
    cout<<-1;
    else if(b/9<1)
    cout<<0;
    else
    {
        int d=9*(b/9);
        //cout<<d;
        for(int i=1;i<=d;i++)
        s+='5';
        while(c--)
        s+='0';
        
    }
    cout<<s;
}