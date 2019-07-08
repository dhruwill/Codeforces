#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
vector< int > v[100000];
bool vis[100000];
int coun=1;
int main()
{
    int n;
    cin>>n;
    map<string ,int>m;
    while(n--)
    {
        string s;
        cin>>s;
        if(m[s]==0)
        cout<<"OK"<<endl;
        m[s]++;
        if(m[s]>1)
        {
            int x=m[s];
            x--;
            cout<<s;
            cout<<x<<endl;
        }
    }
}