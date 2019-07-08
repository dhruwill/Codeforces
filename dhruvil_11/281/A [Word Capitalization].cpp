#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    string s;
    cin>>s;
    //char c=s[0];
    std::locale loc;
    for(int i=0;i<s.length();i++)
    {
        if(i==0)
        std::cout << std::toupper(s[i],loc);
        else
        cout<<s[i];
    }
}