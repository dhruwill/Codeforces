#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
    
  ll r,x1,x2,y1,y2;
  cin>>r>>x1>>y1>>x2>>y2;
  r*=2;
  double d = sqrt((double)(pow(x1-x2,2)+pow(y1-y2,2)));
  cout<< ceil((double)d/r);
}