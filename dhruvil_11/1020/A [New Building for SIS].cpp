#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    IOS
    ll n,h,a,b;
    int k;
    cin>>n>>h>>a>>b>>k;
    ll e=0;
    for(int i=0;i<k;i++)
    {
        ll ta,fa,tb,fb;
        cin>>ta>>fa>>tb>>fb;
        if(ta==tb)
        {
            cout<<abs(fb-fa)<<endl;
        }
        else 
        {
            if(fa!=fb)
            {
                
                  if(fa>b && fb>b)
                  
                {  
                
                    e=abs(fa-b)+abs(fb-b)+abs(ta-tb);
                
                cout<<e<<endl;
               
                }        
                else if(fa<a && fb<a)
                cout<<abs(fa-a)+abs(fb-a)+abs(ta-tb)<<endl;
                else
                cout<<abs(fb-fa)+abs(ta-tb)<<endl;
            }
            else
            {
                if(fa>b)
                cout<<2*abs(fa-b)+abs(ta-tb)<<endl;
                else if(fa<a)
                cout<<2*abs(fa-a)+abs(ta-tb)<<endl;
                else
                cout<<abs(fb-fa)+abs(ta-tb)<<endl;
                
            }
            
            
        }
    }}