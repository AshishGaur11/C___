main()
{
int a[2][2],b[2][2],c[2][2],m,i;
printf("enter the values for 1 matt\n");
for (i=0; i<=1; i++)
{
for (m=0; m<=1; m++)
{
scanf("%d",&a[i][m]);
}
}
printf("enter the values for  2 matt\n");
for (i=0; i<=1; i++)
{
for (m=0; m<=1; m++)
{
scanf("%d",&b[i][m]);
}
}
for (i=0; i<=1; i++)
{
for (m=0; m<=1; m++)
{
c[i][m]=a[i][m]+b[i][m];
}}
printf("the values for sum are\n");
for (i=0; i<=1; i++)
{
printf("\n");
for (m=0; m<=1; m++)
{
printf("%d ",c[i][m]);
}}
getch();
}

