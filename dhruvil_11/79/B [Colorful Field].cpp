#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n,m,k,t;
    cin>>n>>m>>k>>t;
    ll i,j;
    vector< pair<int ,int> >v;
    for (ll i=1;i<=k;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
        
    }
    sort(v.begin(),v.end());
    ll cnt=0,w=0;
    for(ll i=1;i<=t;i++)
    {
        int a,b;
    
        cin>>a>>b;cnt=0;w=0;
            for(ll j=0;j<v.size();j++ )
            {
                if(v[j].first==a &&v[j].second==b)
                {
                    cout<<"Waste"<<endl;
                    w=1;
                    break;
                }
                else if(v[j].first==a && v[j].second>b)
                {
                    break;
                }
                else if(v[j].first>a)
                break;
                else
                cnt++;
                
            }
            if(w!=1){
            ll def=((a-1)*m+(b-1)-cnt)%3;
            if(def==0)
            cout<<"Carrots"<<endl;
            else if(def==1)
            cout<<"Kiwis"<<endl;
            else
            cout<<"Grapes"<<endl;}
            
            
        
    }
    
}