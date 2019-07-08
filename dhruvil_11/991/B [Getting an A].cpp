#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    IOS
    int n;
    cin>>n;
    float a[n];
    float sum=0,avg=0;int i;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if((sum/n)>=4.5)
    cout<<0;
    else
    {
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            sum=sum+5-a[i];
            if((sum/n)>=4.5)
            {
                cout<<i+1;break;
            }
        }
        if(sum/n<4.5)cout<<0;
    }
}