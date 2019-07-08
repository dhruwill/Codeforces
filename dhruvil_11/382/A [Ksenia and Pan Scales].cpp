#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;int i;
    for( i=0;i<s1.length();i++)
    if(s1[i]=='|')
    break;
    //cout<<i<<endl;
    int a=s1.length()-1;
    int b=2*i;
    int c=abs(a-b);
    //cout<<a<<" "<<b<<" "<<c<<" ";
    //i-=1;
    //cout<<s2.length()<<" "<<s1.length()<<" ";
    //cout<<abs(s1.length()-i-1-i)<<endl;
    int x=s2.length()-c;
    //cout<<x;
    if(x>=0)
    {
    	
        if(x%2!=0)
        cout<<"Impossible";
        else
        {
            string c1=s1.substr(0,i);
            string c2=s1.substr(i+1,s1.length()-i-1);
            //cout<<c1<<" "<<c2<<endl;
            if(c1.length()>c2.length())
            {
                for(i=0;i<s2.length();i++)
                {
                    if(c1.length()!=c2.length())
                    c2+=s2[i];
                    else 
                    {
                        
                        c1+=s2[i];
                        
                    }
                }
                cout<<c1<<"|"<<c2;
                
            }
            else if(c1.length()<c2.length())
            {
               for(i=0;i<s2.length();i++)
                {
                    if(c1.length()!=c2.length())
                    c1+=s2[i];
                    else
                    {
                        
                        c2+=s2[i];
                       
                    }
                }
                cout<<c1<<"|"<<c2;
                 
            }
            else
            {
                 for(i=0;i<s2.length();i++)
                {
                        if(i%2)
                        c2+=s2[i];
                        else
                        c1+=s2[i];
                    
                }
                cout<<c1<<"|"<<c2;
                 
            }
            }
        }
    
    else
    cout<<"Impossible";
}