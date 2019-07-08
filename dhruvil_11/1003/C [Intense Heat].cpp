#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    IOS
    int n,k;
    cin>>n>>k;
    double a[n],b[n],sum=0;
    int i,j,t;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
            b[i]=a[i];
        else
            b[i]=b[i-1]+a[i];
    }
    double max=0.000000;
        for(i=0;i<n;i++)
    {
        sum=0;
        //cout<<i<<"  index"<<endl;
        for(j=k;j<=n;j++)
        {
            sum=0;
            double x=j+0.0;
           // cout<<"\t"<<j<<" :no of elements"<<endl;
            if(j+i<=n)
            {

                if(i==0)
                    sum+=b[j+i-1]+0.0;
                    else
                    sum+=b[j+i-1]-b[i-1]+0.0;
                    //cout<<"\t\t"<<"sumis  "<<sum<<endl;
                sum=(sum*1.0)/x;
                //cout<<sum<<endl;
                if(sum>=max)
                    max=sum;
            }

        }

    }




    cout<<setprecision(10)<<max;

}
