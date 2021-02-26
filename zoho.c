#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[10]="WELCOME";
int i,j,k,n,mid=0;
clrscr();
n=strlen(name);
mid=n/2;
printf("%d",n);
for(i=0;i<=n;i++)
{
for(j=n-1;j>i;j--)
{
printf(" ");
}
for(j=mid;j<=mid+1 && j<n;j++)
{
printf("%c",name[j]);
}
if(i>mid)
{
for(j=0;j<i-mid;j++)
{
printf("%c",name[j]);
}
}

printf("\n");
}
getch();

}
