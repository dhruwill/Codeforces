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
int gcd(int a, int b, int *x, int *y) 
{ 
    // Base Case 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
  
    int x1, y1; // To store results of recursive call 
    int g= gcd(b%a, a, &x1, &y1); 
  
    // Update x and y using results of recursive 
    // call 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
  
    return g; 
}
int main()
{
	IOS
	//n==1
	int a,b,c;
	cin>>a>>b>>c;
	int x,y;
	int g = gcd(a,b,&x,&y);
	 x *= c / g;
    y*= c / g;
   // cout<<x<<" "<<y<<endl;
	if(c%g==0)
	{
		if(x>=0 && y>=0)
		{
			cout<<"Yes";
			return 0;
		}
		if(x>=0 && y<0)
		{
			y=-y;
			int  k = ceil((double)y/(a/g));
			//k=-k;
			k=-k;
			if((x+k*(b/g))>=0)
			{
				//cout<<k<<endl;
				
				//cout<<" "<<x<<" "<<y;
				cout<<"Yes";
				return 0;
			}
		}
		if(y>=0 && x<0)
		{
			x=-x;
			int  k = ceil((double)x/(b/g));
			//k=-k;
			if((y-k*(a/g))>=0)
			{
				//cout<<k<<endl;
				//cout<<k;
				
				//cout<<" "<<x<<" "<<y;
				cout<<"Yes";
				return 0;
			}
		}
		cout<<"No";
	}
	else
	{
		cout<<"No";
	}
}