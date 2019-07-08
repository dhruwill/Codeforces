#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i].length()>10)
        cout<<s[i][0]<<s[i].length()-2<<s[i][s[i].length()-1]<<endl;
        else
        cout<<s[i]<<endl;
    }
}