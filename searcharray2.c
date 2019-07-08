#include<stdio.h>
#include<string.h>
void main()
{
int i,j,m,n,item,loc=0,loc1=0,f=0;
int a[20][20];
printf("\nEnter size of the array\n");
scanf("%d%d",&m,&n);
printf("\n\tEnter The Value Of Array:");
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n\tEnter The Value To Be Serched:");
scanf("%d",&item);
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
if(item==a[i][j])
{
loc=i;
loc1=j;
f=1;
//break;
}
}
}
if(f==1)
printf("\n\tThe Item is at  Row:%d And  Coloumn:%d",loc,loc1);
else
printf("Element not found");
printf("\n\n\t\tSearch Completed.");

}
