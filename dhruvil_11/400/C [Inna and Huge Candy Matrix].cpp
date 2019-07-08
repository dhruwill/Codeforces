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
int x[100005],y[100005],n,p,m,a,b,c;
void one()
{
	for(int i=0;i<n;i++)
	{
		int j=x[i];
		x[i]=y[i];
		y[i]=p-j+1;
	}
	int j=p;
	p=m;
	m=j;
}
void two()
{
	for(int i=0;i<n;i++)
	{
		x[i]=p-x[i]+1;
		y[i]=m-y[i]+1;
	}
}
void three()
{
	for(int i=0;i<n;i++)
	{
		int j=y[i];
		y[i]=x[i];
		x[i]=m-j+1;
	}
	int j=p;
	p=m;
	m=j;
}
void rr()
{
	for(int i=0;i<n;i++)
	{
		y[i]=m-y[i]+1;
	}
}
int main()
{
	IOS
	//n==1
	cin>>p>>m>>a>>b>>c>>n;
	for(int i=0;i<n;i++)
		cin>>x[i]>>y[i];
	if(a%4==1)
		one();
	else if(a%4==2)
		two();
	else if(a%4==3)
		three();
	if(b%2)
		rr();
	if(c%4==3)
		one();
	else if(c%4==2)
		two();
	else if(c%4==1)
		three();
	for(int i=0;i<n;i++)
		cout<<x[i]<<" "<<y[i]<<"\n";
	
}