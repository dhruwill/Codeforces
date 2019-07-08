#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int n,chips;
    cin>>n;
    long long a[n];
    int i,j;
    double b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=sqrt(a[i]);
    }
    for(i=0;i<n;i++)
    {
        int p,k=0;
        p=b[i];
        if(p-b[i]==0)
        {
            for(j=2;j<=sqrt(p);j++)
            {
                if((p%j)==0)
                {
                    k=1;
                }
            }
            if(k==1||b[i]==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}