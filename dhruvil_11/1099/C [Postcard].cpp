#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
//#include <boost/lexical_cast.hpp>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
map< ll ,ll >m;
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int c1=0,c2=0;
    for(int i=0;i<s.length();i++)
    if(s[i]=='?' || s[i]=='*')
    c1++;
    c2=s.length()-c1;
    string s1="";
    int diff = abs(c2-k);
    //cout<<diff;
    for(int i=s.length()-1;i>=0;i--)
    {//cout<<diff<<" ";
        
        if(s[i]!='?' && s[i]!='*')
        s1+=s[i];
        else
        {
            if(s[i]!='?' && s[i]!='*')
             s1+=s[i];
             else
             {
                 if(c2>k && diff!=0)
                 {
                     i--;//cout<<'k';
                     diff--;
                 }
                 else if (c2<=k && s[i]=='*' && diff!=0)
                 {//cout<<11;
                     while(diff!=0)
                     {s1+=s[i-1];diff--;}
                     s1+=s[i-1];
                     i--;
                     diff=0;
                 }
             }
        }
        
    }reverse(s1.begin(),s1.end());
   // cout<<s1<<"\n";
    if(s1.length()!=k)
    {
        cout<<"Impossible";
        return 0;
    }
    else
    cout<<s1;
}