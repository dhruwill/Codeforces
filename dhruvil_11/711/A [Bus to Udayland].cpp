#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,done=0;
    cin>>n;
    char a[n][5];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        cin>>a[i][j];
       
    }
    for(i=0;i<n;i++)
    {
         if(a[i][0]=='O' && a[i][1]=='O')
        {
            a[i][0]='+';a[i][1]='+';done=1;break;
        }
        else if(a[i][3]=='O'&&a[i][4]=='O')
        {
            a[i][3]='+';a[i][4]='+';done=1;break;
        }
    }
    if(done==1)
    {cout<<"YES"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        cout<<a[i][j];
        cout<<"\n";
    }}
    if(done==0)cout<<"NO";
    
    
}