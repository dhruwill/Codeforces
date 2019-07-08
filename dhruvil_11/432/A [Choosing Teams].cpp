#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    if(n<3)
    cout<<0;
    else
    {
        int c=0;
        for(int i=2;i<n;i+=3)
        {
            if(a[i]+k<=5)
            c++;
        }
        cout<<c;
    }
}