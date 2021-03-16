main()
{
int a[100],i,n;
printf("enter the value for array upto nth position\n");
scanf("%d",&n);
for (i=1; i<=n; i++)
{scanf("%d",&a[i]);}
for (i=1; i<=n; i++)
{printf("here-%d\n",a[i]);}
}
