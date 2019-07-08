#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define f first
#define s second
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    IOS
    //n==1
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll min=10000000;
    string s1="";
    char a[3]={'R','G','B'};
    char b[3];
    
       ll  ans=0;
        for(int i=0;i<n;i++)
            if(s[i]!=a[i%3])
                ans++;
            if(ans<min)
            {
                min=ans;
                b[0]=a[0];b[1]=a[1];b[2]=a[2];
            }
           // cout<<1;
    
    a[1]='B';a[2]='G';a[0]='R';
      ans=0;
        for(int i=0;i<n;i++)
            if(s[i]!=a[i%3])
                ans++;
            if(ans<min)
            {
                min=ans;
                b[0]=a[0];b[1]=a[1];b[2]=a[2];
            }
            a[0]='B';a[1]='R';a[2]='G';
      ans=0;
        for(int i=0;i<n;i++)
            if(s[i]!=a[i%3])
                ans++;
            if(ans<min)
            {
                min=ans;
                b[0]=a[0];b[1]=a[1];b[2]=a[2];
            }
            a[1]='G';a[2]='R';a[0]='B';
      ans=0;
        for(int i=0;i<n;i++)
            if(s[i]!=a[i%3])
                ans++;
            if(ans<min)
            {
                min=ans;
                b[0]=a[0];b[1]=a[1];b[2]=a[2];
            }
            a[0]='G';a[2]='B';a[1]='R';
      ans=0;
        for(int i=0;i<n;i++)
            if(s[i]!=a[i%3])
                ans++;
            if(ans<min)
            {
                min=ans;
                b[0]=a[0];b[1]=a[1];b[2]=a[2];
            }
             a[2]='R';a[1]='B';a[0]='G';
      ans=0;
        for(int i=0;i<n;i++)
            if(s[i]!=a[i%3])
                ans++;
            if(ans<min)
            {
                min=ans;
                b[0]=a[0];b[1]=a[1];b[2]=a[2];
            }
    cout<<min<<endl;
    for(int i=0;i<n;i++)
        cout<<b[i%3];

}