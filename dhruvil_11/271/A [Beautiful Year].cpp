#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
#include <sstream>

int main()
{
    IOS
    int n;
    cin>>n;
    n+=1;
    
    string geek = to_string(n);
    int i=n;
    while(1)
    {
        
        geek=to_string(i);
        sort(geek.begin(),geek.end());
        if(geek[0]<geek[1] && geek[1]<geek[2] &&  geek[2]<geek[3])
        {
            cout<<i;return 0;
        }
        i++;
        
        
        
    }
}
    