main()
{
int x,m,i; i=0;
printf("enter the the number the number to sum the digits\n");
scanf("%d",&m);
while (m!=0)
{
x=m%10;
i=i+x;
m=m/10;
}
printf("%d",i);
}
