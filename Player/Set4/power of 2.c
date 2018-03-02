#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,c=2,flag=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<64;i++)
	{
		c*=2;
		if((n<=c)&&(n==c))
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
