#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<char,int> &a,
              const pair<char,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    string s;
    cin>>s;
    int k,i;
    cin>>k;
    int a[26]={0},c=0;
    char ci[26]={0};
    vector< pair <char,int> >  v;
    for(i=0;i<s.length();i++)
    {
        a[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]!=0)
        {

            c++;
            v.push_back(make_pair(char(i+97),a[i]));

        }
    }

   sort(v.begin(),v.end(),sortbysec);
    for(i=0;i<v.size();i++)
    {

            if(k>=v[i].second)
            {
                k-=v[i].second;
                ci[i]=v[i].first;c--;

            }

    }

    cout<<c<<endl;
    for(i=0;i<s.length();i++)
    {
        for(int j=0;j<26;j++)
        {if(ci[j]==s[i])s[i]='*';}

    }
    for(i=0;i<s.length();i++)
    {
        if(s[i]!='*')cout<<s[i];
    }



}

