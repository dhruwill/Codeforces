#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    IOS
    //n==1
    double a,b,c;
    cin>>a>>b>>c;
    double d = sqrt(pow(b,2)-4*a*c);
    double r1 = (d-b)/(2*a);
    double r2 = -(d+b)/(2*a);
    printf("%0.20f\n",max(r1,r2) );
    printf("%0.20f\n",min(r1,r2) );
}