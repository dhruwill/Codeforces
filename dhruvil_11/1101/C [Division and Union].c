#include<stdio.h>
void merge(int *a,int *b,int *c,int l ,int m ,int r)
{
	int y1=l;
	int y2=m+1;
	int d[r-l+1],e[r-l+1],f[r-l+1];
	int i=0;
	for(;y1<=m && y2<=r;)
	{
	    if(a[y1]<a[y2])
		{
            d[i]=a[y1];
			e[i]=b[y1];
			f[i]=c[y1];
			y1++;
			i++;
		}
		else if(a[y1]==a[y2])
		{
			if(b[y1]<b[y2])
			{
				d[i]=a[y1];
				e[i]=b[y1];
				f[i]=c[y1];
				y1++;
				i++;
			}
			else
			{
				d[i]=a[y2];
				e[i]=b[y2];
				f[i]=c[y2];
				y2++;
				i++;
			}
		}
		else if(a[y1]>a[y2])
		{
			//printf("%d\n",i );
			d[i]=a[y2];
			e[i]=b[y2];
			f[i]=c[y2];
			i++;
			y2++;
		}
		//printf("%d %d\n",i,d[i] );
	}
	while(y1<=m)
	{
			d[i]=a[y1];
			e[i]=b[y1];
			f[i]=c[y1];
			y1++;i++;
	}
	while(y2<=r)
	{
			d[i]=a[y2];
			e[i]=b[y2];
			f[i]=c[y2];
			y2++;i++;
	}
	for(int j=0;j<i;j++)
	{
		a[l+j]=d[j];
		b[l+j]=e[j];
		c[l+j]=f[j];
	}
}
void sort(int *a,int *b,int *c,int l,int r)
{
	if(l<r)
	{
		//printf("%d %d\n",l,r );
		int m = (l+r)/2;
		sort(a,b,c,l,m);
		sort(a,b,c,m+1,r);
		merge(a,b,c,l,m,r);
	}
	else
		return;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
	int n;
	scanf("%d",&n);
	int a[n],b[n],c[n],d[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		c[i]=i;
	}
	sort(a,b,c,0,n-1);
/*for(int i=0;i<n;i++)
		printf("%d %d %d\n",a[i],b[i],c[i]);*/
	int st[n],st2[n],t=0,r=0;
	d[c[0]]=1;
	int min = a[0],max=b[0];
	int l =0;
	int cc=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			d[c[i]]=3-d[c[l]];
            cc++;
			min=a[i];
			max=b[i];
			l = i;
		}
		else if(a[i]<=max)
		{
			d[c[i]]=d[c[l]];
			if(max<b[i])
			max=b[i];
			l = i;
		}
	}
    if(cc==0 || cc==n)
		{
			printf("-1\n");
			//return 0; 
			continue;
		}
	for(int i=0;i<n;i++)
		{printf("%d ",d[i]);}
	//printf("%d",t);
		printf("\n");
    }
}