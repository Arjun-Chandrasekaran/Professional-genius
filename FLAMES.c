#include<stdio.h>
#include<string.h>
void main()
{
	char a[20],b[20],c[6]="FLAMES";
	int i,x=0,y=0,z,l1,l2,j,t,r=0;
	printf("Enter your name" );
	scanf("%s",&a);
	printf("Enter your p.name: ");
	scanf("%s",&b);
	l1=strlen(a);
	l2=strlen(b);
	for(i=0;i<l1;i++)
	{
		for(j=0;j<l2;j++)
		{
			if(a[i]==b[j])
			{
				a[i]=b[j]='*';
				break;
			}
		}
	}
	for(i=0;i<l1;i++)
	{
		if(a[i]!='*')
		{
			x+=1;
		}
	}
	for(i=0;i<l2;i++)
	{
		if(b[i]!='*')
		{
			y+=1;
		}
	}
	z=x+y;
	for(i=6;i>1;i--)
	{
		t=z%i;
		j=r;
		while(j<6)
		{
			if(c[j+1]!='\0')
			{			
				if(t==0)
				{
					c[j]='*';
					printf("%s\n",c);
					break;
				}
				t--;
				j++;
				r=j;
			}
			else
			{
				j=0;
			}
		}	
	}
}
