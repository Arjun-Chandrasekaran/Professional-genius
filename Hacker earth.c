#include<stdio.h>
void main()
{
	int b[100000],i,n,l,sum=0,r,f,d=97,count=0,j;
	char a[100000][100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		l=strlen(a[i]);
		for(j=0;j<l;j++)
		{
			r=(int)a[i][j];
			f=r-d;
			sum+=f;
		}
		b[i]=sum;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]==b[j])
			{
				count+=1;
			}
		}
	}
	printf("The total equal cost of strings are : %d",count);
}
