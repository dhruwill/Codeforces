#include <iostream>
#include<algorithm>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long
using namespace std;
void pairsort(int a[], int b[], int n) 
{ 
    pair<int, int> pairt[n]; 
  
    // Storing the respective array 
    // elements in pairs. 
    for (int i = 0; i < n; i++)  
    { 
        pairt[i].first = a[i]; 
        pairt[i].second = b[i]; 
    } 
  
    // Sorting the pair array. 
    sort(pairt, pairt + n); 
      
    // Modifying original arrays 
    for (int i = 0; i < n; i++)  
    { 
        a[i] = pairt[i].first; 
        b[i] = pairt[i].second; 
    } 
} 
int32_t main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int f=0;
    int c=0;
    for(int i=0;i<n-1;i++){
    /*    if((a[i]+a[i+1])%k==0){
            c+=(a[i]+a[i+1])/k;
            a[i+1]=0;
            i++;
           // if(i==n-2) f=1;
           // cout<<c<<"C"<<endl;
        }
        else{
            
            c+=(a[i]+a[i+1])/k;
            if(a[i]+a[i+1]<k)
            {
                c+=1;
                a[i+1]=0;
                i++; 
             //   if(i==n-2) f=1;
            if(i==n-1){
                cout<<c;
                return 0;
            }
            
                continue;
            }
            a[i+1]=(a[i]+a[i+1])%k;
           // cout<<c<<"C"<<endl;
        }
        //cout<<i<< " "<<a[i+1]<<endl;*/
        c+=a[i]/k;
        a[i]=a[i]%k;
        if(a[i]!=0)
         { if(k-a[i]<a[i+1])
             a[i+1]-=(k-a[i]);
             else
              a[i+1]=0;
             c+=1;
         }
         a[i]=0;
       // a[i+1]+=a[i]%k;
       
        
    }//cout<<c;
   // if(f==1){
    c+=a[n-1]/k;
    if(a[n-1]%k!=0)
    c+=1;
   // }
    cout<<c;
	return 0;
}