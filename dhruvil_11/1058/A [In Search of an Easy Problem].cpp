#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
    return 0;
}