#include<stdio.h>
int cmax(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        return a;
        else
        return c;
    }
    else
    {
        if(b>c)
        return b;
        else return c;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int c=0,d=0,e=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%3==0)
        c+=a[i];
        else if (i%3==1)
        d+=a[i];
        else
        e+=a[i];
        
    }
    if(cmax(c,d,e)==c)
    {
        printf("chest");
    }
    else if(cmax(c,d,e)==d)
    {
        printf("biceps");
    }
    else
    printf("back");
    
}