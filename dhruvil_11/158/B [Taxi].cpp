#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,i;
    cin>>n;
    int a[n],b[4]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]-1]++;
    }
    int min=b[3];
    if(b[2]>b[0])
    {
        min+=b[2];
        if(b[1]%2==0)
        {
            min+=b[1]/2;
             
        }
        else
        min+=b[1]/2+1;
    }
    else
    {
        min+=b[2];
        b[0]-=b[2];
        if(b[1]!=0 &&  b[0]!=0)
        {if(b[1]%2==0)
        {
            min+=b[1]/2;
             min+=b[0]/4+(b[0]%4==0?0:1);
            
        }
         if( b[1]%2!=0)
        {
            min+=b[1]/2;
            b[1]%=2;
            b[0]=b[0]-2*b[1];
            if(b[0]<=0)
            b[0]=0;
            min+=b[1];
            if(b[0]%4==0 )
            min+=b[0]/4;
            else
            min+=b[0]/4+1;
        }}
        else if(b[1]==0 && b[0]!=0)
        {
            min+=b[0]/4+(b[0]%4==0?0:1);
        }
        else if(b[1]!=0 && b[0]==0)
        {
            min+=b[1]/2+(b[1]%2==0?0:1);
        }
        else
        min+=b[1]+b[0];
    }
    cout<<min;
    
}