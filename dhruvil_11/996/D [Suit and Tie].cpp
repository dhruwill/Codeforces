#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    IOS
    int n,i,j;
    cin>>n;
    int a[2*n];
    for(i=0;i<2*n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    for(i=0;i<2*n-1;i++)
    {
       
        if(a[i]==a[i+1]){
            if(i==2*n-2)break;
            i++;
            continue;}
        else
        {
            for(j=0;j<2*n;j++)
            {
                if(a[j]==a[i] && j!=i)
                break;
            }
            c+=j-i-1;//cout<<a[i]<<" "<<i<<" "<<j<<" ";
            for(int t=j;t>=i+1;t--)
            {
                int x=a[t];
                a[t]=a[t-1];a[t-1]=x;
            }
             if(i==2*n-2)break;
            i++;
        }
    }
    cout<<c;
}