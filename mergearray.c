#include<stdio.h>
void main( )
{
int a[1000],b[1000], i, j, k=0, s, m, n, temp;
printf(" Enter the number of element in first array : ") ;
scanf("%d",&m) ;
printf("\n Enter the element of first array in sorted order : \n") ;
for (  i=0 ; i<m ; i++ )
scanf("%d",&a[i]) ;

printf(" Enter the number of element in second array : ") ;
scanf("%d",&n) ;
printf("\n Enter the element of second array in sorted order : \n") ;
for (  i=0 ; i<n ; i++ )
scanf("%d",&b[i]) ;
s = m+n ;
for (  i=m ; i<s ; i++ )
{
a[i] = b[k] ;
for (  j=0 ; j<s ; j++ )
{
if (  a[j]>=a[i]  )
{
temp = a[i] ;
a[i] = a[j] ;
a[j] = temp ;
}
}
k=k+1 ;
}
printf("\n Array after merging :\n") ;
for ( i=0 ;i<s ;i++ )
printf("%d \t",a[i]) ;
}
