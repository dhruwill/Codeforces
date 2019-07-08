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
    int n;
    vector< pair< int,int> >v;
    cin>>n;
    int x[n+1];
    for(int i=1;i<=n;i++)
    {
        int a,b,c,d,e=0;
        cin>>a>>b>>c>>d;
        x[i]=a+b+c+d;
        
        
    }//sort(v.begin(),v.end());
    int max=1;
    for(int i=2;i<=n;i++)
    {
    	if(x[i]>x[1])
    	max++;
    }
        cout<<max;
        
        
        
    }