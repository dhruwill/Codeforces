#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
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
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.length();i++)
    {

        if(s[i]=='1')
            {
                flag=0;
                for(int j=i+1;j<s.length();j++)
                    if(s[j]=='0')
                        flag++;
                    if(flag>=6)
                    {
                        cout<<"yes";
                        return 0;
                    }
            }
    }
    cout<<"no";

}