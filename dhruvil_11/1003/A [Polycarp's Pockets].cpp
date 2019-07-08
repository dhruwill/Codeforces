#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    IOS
    int n;
    cin>>n;
    int a[n];
    int c[101]={0};
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        c[a[i]]++;

    }
    sort(c,c+101);
    cout<<c[100];
}
