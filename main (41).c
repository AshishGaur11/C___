main()
{
int a[2][2],b[2][2],c[2][2],i,j,k;
printf("get the multiplication of mat\n");
for (i=0; i<=1; i++)
{
for (j=0; j<=1; j++)
{
scanf("%d%d",&a[i][j],&b[i][j]);}}
for (i=0; i<=1; i++)
{
for (j=0; j<=1; j++)
{for (k=0; k<=1; k++)
{c[i][j]=c[i][j]+(a[i][k]*b[i][k]);}
}}
for (i=0; i<=1; i++)
{
for (j=0; j<=1; j++)
{
printf("%d",c[i][j]);}
printf("\n");
}
}
