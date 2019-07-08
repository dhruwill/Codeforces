#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a;
    cin>>a;
    long long int b,c;
    int done=0;
   if(a<3) cout<<"-1";
   else
   {
		   if(a%2==0&&done==0)
		    {
		    b=(pow(a/2,2)-1);
		
		    c=b+2;
					   cout<<b<<" "<<c;done=1;
		        
    		}
    else if(a%2!=0 && done==0)
    {
        b=(pow(a,2)-1)/2;
        
        c=b+1;
        
      
           cout<<b<<" "<<c;done=1; }
   }
    
   
}
