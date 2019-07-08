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
    cout<<(n*n)/2+n%2<<endl;
    if(n%2!=0)
    {int c=0;
        for(int i=0;i<n;i++)
        {for(int j=0;j<n;j++)
        {
            
            if(c%2==0)
            cout<<'C';
            else
            cout<<'.';c++;
        }cout<<endl;}
    }
    else
    {int c=0;
        for(int i=0;i<n;i++)
        {
            c=0;for(int  j=0;j<n;j++)
        {
            
            if(i%2==0){if(c%2==0 )
            cout<<'C';
            else
            cout<<'.';c++;}
            else
            {
                if(c%2==0)
                cout<<'.';
                else
                cout<<'C';
                c++;
            }
        }cout<<endl;}
    }
}