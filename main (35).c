#include<stdio.h>
main()
{
int i,a[5],b[5],c[5],d[5];
printf("\nenter the values for add & multiply\n");
printf("\nenter for the first\n");
for (i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
printf("\nenter for the second\n");
for (i=0;i<=4;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<=4;i++)
{
c[i]=a[i]+b[i];
}
for(i=0;i<=4;i++)
{
printf("the sum of is>>%d\n",c[i]);
}
for(i=0;i<=4;i++)
{
d[i]=a[i]*b[i];
}
for(i=0;i<=4;i++)
{
printf("the multiplication of is>>%d\n",d[i]);
}
getch();
}
