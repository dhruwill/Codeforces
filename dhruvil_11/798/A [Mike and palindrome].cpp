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
        int cnt=0;
        for(int i=0;i<(s.length()/2);i++)
        {
            if(s[i]!=s[s.length()-1-i])
                cnt++;
        }
        if(s.length()%2==0 && cnt!=1)
            cout<<"no";
        else if(s.length()%2 && cnt>1)
            cout<<"no";
        else
            cout<<"yes";
    }