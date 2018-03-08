#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[10],flag=0,i;
clrscr();
printf("Enter the total no: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>a[i+1])
{
flag=1;
break;
}
}
if(flag==1)
{
printf("No");
}
else if(flag==0)
{
printf("Yes");
}
getch();
}
