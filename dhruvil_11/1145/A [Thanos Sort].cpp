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
    int ans=1;
    void check(int *a,int l,int m,int r)
    {
        int ns=1;
        for(int i=l;i<r;i++)
        {
            if(a[i]<=a[i+1])
                ns++;
            else
            {
                return;
            }
        }
        ans=max(ans,ns);
    }
    void m(int *a,int l,int r)
    {
    //  int l =  0;
        if(l>=r)
            return ;
        else
        {
            int mq = (l+r)/2;
            //cout<<l<<" "<<mq<<" "<<r<<"\n";
            m(a,l,mq);
            m(a,mq+1,r);
            check(a,l,mq,r);
        }
    }
    int main()
    {
        IOS
        //n==1
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        m(a,0,n-1);                                             
        cout<<ans;
        
    }