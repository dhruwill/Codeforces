#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
 {
    int k;
    cin>>k;
    int a[10]={0};
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    {
        char b;
        cin>>b;
        if(b=='.')
        continue;
        else
        {
            a[(int)b-48]++;
        }
        
    }
    for(int i=0;i<10;i++ )
    {
        if(a[i]>2*k)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
 }
    