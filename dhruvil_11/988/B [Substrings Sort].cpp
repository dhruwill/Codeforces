#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ok=0;
    string s1,s2;
    vector< pair<int,string> > v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s1;
        v.push_back(make_pair(s1.length(),s1));
    }
    sort(v.begin(),v.end());
    if(n==1)
    cout<<"YES"<<endl<<v[0].second;
    for(i=0;i<n-1;i++)
    {
       s1=v[i].second;//cout<<s1<<v[i].first<<endl;
       s2=v[i+1].second;
       ok=0;
       if(s1==s2)
       ok=1;
       else{
        for(j=0;j<s2.length()-s1.length()+1;j++)
        {
           //cout<<j<<s2.length()-s1.length()<<s2.substr(j,v[i].first)<<endl;
            if(s1==s2.substr(j,v[i].first))
           {
               ok=1;
               break;
           }
            
            
            
        }
        if(ok==0)
        {
            cout<<"NO";
            
            return 0;
        }}
    }
    if(ok==1)
    {
        cout<<"YES"<<endl;
        for(i=0;i<n;i++)
        cout<<v[i].second<<endl;
    }
    
}