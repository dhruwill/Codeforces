#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int k=0;
    string s1="";
    for(int i=0;i<n;i+=k)
    {
        s1+=s[i];
        k++;
    }
    cout<<s1;
  
}