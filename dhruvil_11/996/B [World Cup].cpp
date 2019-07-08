#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   int n;
   cin>>n;
   double a[n],ind=0;
   ll min=10000000000;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       ll t=ceil((a[i]+1-(i+1))/n);
       if(t<=0)
       t=0;
       //cout<<t<<endl;
       if(min>=(i+1)+t*n)
       {
           min=(i+1)+t*n;
          //cout<<min<<endl;
           ind = i+1;
           
       }
       
       
   }
   cout<<ind;
}