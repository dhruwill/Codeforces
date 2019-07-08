#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll max(ll a,ll b)
{
    if(a>=b)
        return a;
    else
        return b;
}
ll min(ll a,ll b)
{
    if(a>=b)
        return b;
    else
        return a;
}
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
ll mod(ll a)
{
    if(a>=0)
        return a;
    else
        return -a;
}
void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];
 

    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    sort(pairt, pairt + n);

    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
ll NextLargestBinSearch(ll key, ll data[], ll len )
{
    ll low  = 0;
    ll high = len-1;

    while( low <= high)
    {
        // To convert to Javascript:
        // var mid = low + ((high - low) / 2) | 0;
        ll mid = low + ((high - low) / 2);

        /**/ if (data[mid] < key) low  = mid + 1;
        else if (data[mid] > key) high = mid - 1;
        else return                      mid + 1;
    }

    if( high < 0 )
        return 0;   // key < data[0]
    else
    if( low > (len-1))
        return len; // key >= data[len-1]
    else
        return (low < high)
            ? low  + 1
            : high + 1;
}
ll BinarySearch(ll key, ll data[], ll len )
{
    ll low  = 0;
    ll high = len-1;
    ll mid;
    while( high >= low )
    {
         mid = low + ((high - low) / 2);

        /**/ if (data[mid] < key) low  = mid + 1;
        else if (data[mid] > key) high = mid - 1;
        else return                      mid    ;
    }
    return mid; // KEY_NOT_FOUND
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[m+1]={0};
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        while(c--)
        {
            int x;
            cin>>x;
            a[x]=1;
        }
        
    }
    for(int i=1;i<=m;i++)
    {
        if(a[i]!=1)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}