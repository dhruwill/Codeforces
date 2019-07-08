#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
    IOS
    int n,gr;
    int k;
    cin>>n>>k;
    int i,j;
    int a[n];
    ll sum=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    int max=0;
    vector< pair< ll,ll>  >v;

    if(k==1)
    {

        for(i=0;i<n;i++)
            if(sum<a[i])
                sum=a[i];
        cout<<sum<<endl;
        cout<<n;
    }
    else{
           int a1[n],j=0;
                for(i=0;i<n;i++)
                    v.push_back(make_pair(a[i],i));
                  sort(v.begin(),v.end(),sortinrev);
                sort(a,a+n);i=n-1;
               int day=k;
               while(k--)
               {
                   sum+=a[i];
                   a1[j]=v[j].second;j++;
                   i--;
                  // a1[j]=i+1;

               }sort(a1,a1+j);
               cout<<sum<<endl;
               int y=day;

               int rt=0;
              cout<<a1[1]<<" ";
              for(i=2;i<j;i++)
              {
                 cout<<a1[i]-a1[i-1]<<" ";
              }
              cout<<n-a1[j-1];






           }



    }
