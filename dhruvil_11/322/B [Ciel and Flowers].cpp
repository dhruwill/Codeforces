#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli r,g,b;
    cin>>r;
    cin>>g;cin>>b;
    lli x=0,y=0,z=0;
    x=r/3+g/3+b/3;
if(r!=0 && g!=0 && b!=0 )
{


    y=1+(r-1)/3+(g-1)/3+(b-1)/3;
    z=2+(r-2)/3+(g-2)/3+(b-2)/3;
}
    if(x>y)
    {
        if(x>z)
            cout<<x;
        else cout<<z;
    }
    else
    {
        if(y>z)
            cout<<y;
        else cout<<z;

    }

}
