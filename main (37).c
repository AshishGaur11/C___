main()
{
int a[2][2],m,n;
printf("enter the values for matt\n");
for (m=0; m<=1; m++)
{
for (n=0; n<=1; n++)
{
scanf("%d",&a[m][n]);
}
}
for (m=0; m<=1; m++)
{
for (n=0; n<=1; n++)
{
printf("%d",a[m][n]);
}
printf(" \n");
}
}
