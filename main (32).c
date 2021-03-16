main()
{
int i,c,j;
printf("all table from 1 to 10\n");
i=1;
do
{
    j=1;
    do
    {
        c=i*j;
        printf("%d\t",c);
        j++;
    }
        while (j<=10);
        i++;
        printf("\n");}
        while (i<=10);

}
