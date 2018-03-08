#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a,b,c=0;
clrscr();
printf("Enter the no. of cases:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d%d",&a,&b);
if(a<b)
{
c+=1;
}
}
printf("The result is: %d",c);
getch();
}
