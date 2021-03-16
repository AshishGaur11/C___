#include<stdio.h>
main()
{
int a[50],i,j,t,n;
printf("enter how many values for sorting\n");
scanf("%d",&n);
printf("enter the value");
for (i=0; i<n; i++)
{scanf("%d",&a[i]);}
for (j=0; j<n; j++)
{
for (i=j+1; i<n; i++)
{
 if (a[j]>a[i])
{   t=a[j];
    a[j]=a[i];
    a[i]=t;
}ss
}
}
printf("in ascending :\n");
for (i=0; i<n; i++)
{printf("%d\n",a[i]);}
getch();
}
