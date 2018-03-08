#include<stdio.h>
void main()
{
    int m,n,i,p,x=1,s=0;
    printf("Enter the number:");
    scanf("%d",&m);
    printf("Enter the power: ");
    scanf("%d",&n);
    p=n;
    for(i=0;i<n;i++)
    {
        x*=p;
        if(x==m)
        {
            s=1;
            break;
        }
        if(x>m)
        {
            break;
        }
    }
    if(s==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
