#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool sortbysec(const pair<string,int> &a,
              const pair<string,int> &b)
{
    return (a.first < b.first);
}


int main()
{
    IOS
    int n;
    cin>>n;
    string s;int i,j,done=0;
    vector < pair < string,int > > v;
    for( i=0;i<2*n;i++)
    {
        cin>>s;
        v.push_back(make_pair(s,s.length()));

    }
    /*vector < pair<string,int> > v1;
     for(int i=0;i<n;i++)
    {
        cin>>s;
        v1.push_back(make_pair(s,s.length()));

    }*/    sort(v.begin(), v.end()-n, sortbysec);
    sort(v.begin()+n, v.end(), sortbysec);
    int c=0;
   // for(i=0;i<n;i++)cout<<v[i].first<<" "<<v[i+n].first<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {if(v[i+n].first==v[j].first){v[j].first=" ";v[i+n].first=" ";v[j].second=0;v[i+n].second =0;done=1;break;}}

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(v[i+n].second ==v[j].second&& v[i+n].second!=0){c++;v[j].second=0;break;}
        }
    }
   if(c>n)cout<<n;
   else
    cout<<c;
}
