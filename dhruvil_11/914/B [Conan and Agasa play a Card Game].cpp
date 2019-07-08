#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int a[100001];
int main()
{
    IOS
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        a[b[i]]++;
    }
    for(int i=0;i<=100000;i++)
    {
        if(a[i]&1)
        {
            cout<<"Conan";
            return 0;
        }
    }
    cout<<"Agasa";
}