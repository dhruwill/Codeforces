#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define f first
#define s second
//vector< int > v[100000];
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
bool vis[1000000];
int coun=1;
//pair cq(ll a,ll b)

int main()
{
    IOS
    //n==1
    int n;
    cin>>n;
    int min,max;
    int c=0;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    min=a[0];
    max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            c++;
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
            c++;
            
        }
    }
    cout<<c;
    
}