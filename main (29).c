main()
{
int x,m;
printf("enter the number to get the inverse\n");
scanf("%d",&m);
while(m!=0)
{
x=m%10;
printf("%d",x);
m=m/10;
}
}
