#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
//vector< int > v[100000];
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
bool vis[1000000];
int coun=1;
int main()
{
    IOS
    //n==1
    int n,k;
    cin>>n>>k;
    int a[n];
    vector< pair <int ,int> > v;
    int cc[n];
    int b[5001]={0};
    int c[k+1];
    for(int i=1;i<=k;i++)
    c[i]=i;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.pb({a[i],i});
        b[a[i]]++;
        if(b[a[i]]>k)
        {
            cout<<"NO";
            return 0;
        }
    }
    //sort(a,a+n);
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cc[v[i].second]=(i+1)%k;
        
        
    }
    cout<<"YES"<<endl;
    //sort(v.begin(),v.end(),sortbysec);
    for(int i=0;i<n;i++)
    {if(cc[i]==0)cc[i]=k;
    cout<<cc[i]<<" ";}
    
}