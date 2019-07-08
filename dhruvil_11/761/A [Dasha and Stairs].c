#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==0 && b==0)
    {
        printf("NO");
        return 0;
    }
    if(fabs(a-b)<=1)
    {
        printf("YES");
        
    }
    else
    printf("NO");
}