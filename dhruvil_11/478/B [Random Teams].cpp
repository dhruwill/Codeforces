#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli fac(lli n,lli r)
{
    if(n<r)
        return 0;
    lli x,c=1,i;
    if(r>n/2)r=n-r;
    for(i=1;i<=r;i++)
    {
        c*=(n-r+i);
        c/=i;

    }
    return c;

}



int main()
{
    lli  m,n;
    cin>>n>>m;
    lli min=0,max=0;
    lli nospm;
    nospm=n%m;
    min=nospm*fac(n/m+1,2);
    if(n/m>1)
    {
        min+=(m-nospm)*fac(n/m,2);
    }
    max=fac(n-m+1,2);
    cout<<min<<" "<<max;


}
