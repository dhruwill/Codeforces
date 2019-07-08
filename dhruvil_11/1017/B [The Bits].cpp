// CPP program to Decimal to binary conversion

#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



 string s1;
// driver code
int main()
{
    IOS
    int n;
    cin>>n;
    string s2;
    cin>>s1;
    cin>>s2;



    ll c=0,d=0,e=0,f=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i]=='0' && s2[i]=='0')
            c++;

    }
    for(int i=0;i<n;i++)
    {
        if(s1[i]=='0' && s2[i]=='1')
            d++;

    }
    for(int i=0;i<n;i++)
    {
        if(s1[i]=='1' && s2[i]=='0')
            e++;

    }
    for(int i=0;i<n;i++)
    {
        if(s1[i]=='1' && s2[i]=='1')
            f++;

    }
    ll sum=0;
    sum+=c*f+c*e;
    sum+=d*e;
    cout<<sum;

}
