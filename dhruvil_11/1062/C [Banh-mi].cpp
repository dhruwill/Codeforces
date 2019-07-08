#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define p 1000000007
ll power( ll y) 
{ 
    ll res = 1;      // Initialize result 
    ll x= 2;
    // = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y%2==1) 
            res = ((res%p)*(x%p)) % p; 
  
        // y must be even now 
        y/=2; // y = y/2 
        x = ((x%p)*(x%p)) % p;   
    } 
    return res%p; 
} 
int main()
{
    int n,q;
    cin>>n>>q;
    ll a[n]={0};
    string s;
    cin>>s;
    
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(s[i]=='1')
            a[0]=1;
        }
        else
        {
            if(s[i]=='1')
            a[i]=a[i-1]+1;
            else
            a[i]=a[i-1];
        }
    }
    for(int i=0;i<q;i++)
    {
        int c,b;
        cin>>c>>b;
        int n1 = a[b-1] - a[c-1];
        if(s[c-1]=='1')
        n1++;
        int m = b-c+1-n1;
        if(n1==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        //cout<<n<<" "<<m<<endl;
        ll ans1 = power(n1+m);
      //  cout<<ans1<<endl;
        ll ans2 = power(m);
    //    cout<<ans2<<endl;
        //ll ans3 = power(m)-1;
        //cout<<ans3<<endl;
        //ll ans4 = ((ans2%p)*(ans3%p))%p;
        //ll ans5 = ans1%p + ans4%p;
        ll ans5 = (ans1 - ans2+p)%p;
        cout<<ans5<<"\n";
        
        
    }
}
  