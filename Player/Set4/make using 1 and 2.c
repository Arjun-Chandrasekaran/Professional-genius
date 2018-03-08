#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,b,c=0,i;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<=n/2;i++)
{
a=i*2;
if(a<=n)
{
c+=1;
}
else
{
break;
}
}
printf("Ways : %d",c);
getch();
}
