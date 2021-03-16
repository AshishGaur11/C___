#include<Stdio.h>
#include<conio.h>
#include<Stdlib.h>
struct student
{
int p,c,m,e,ce,total;
char name[20];
};

struct student s[3];

main()
{
int i;
for(i=0; i<=3; i++)
{
printf("\nEnter the name, P, C, M, E, CE\n");
scanf("%s%d%d%d%d%d",&s[i].name,&s[i].p,&s[i].c,&s[i].m,&s[i].e,&s[i].ce);
s[i].total=s[i].p+s[i].c+s[i].m+s[i].e+s[i].ce;
printf("%s\nthe total = %d\n",s[i].name,s[i].total);
}
printf("All together\n");
for(i=0; i<=3; i++)
{
printf("%s\nthe total = %d\n",s[i].name,s[i].total);
}
getch();
}

