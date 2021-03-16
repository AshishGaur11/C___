#include<stdio.h>
main()
{
int a[3][3],i,m,c;
printf("enter the value of mat\n");
for (i=0; i<=2; i++)
{
for (m=0; m<=2; m++)
{
scanf("%d\t",&a[i][m]);
}}
for (i=0; i<=2; i++)
{
for (m=0; m<=2; m++)
{
printf("%d",a[m][i]);
}
printf("\n");
}
}
