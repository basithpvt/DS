#include<stdio.h>

void main()
{
	
	int arr1[50], arr2[50], size1, size2, size, i, j, k, merge[100];
	printf("Enter Array 1 Size : ");
	scanf("%d",&size1);
	
	for(i=0; i<size1; i++)
	{
		printf("Enter Array %d  Elemenets",size1);
		scanf("%d",&arr1[i]);
	}
	printf("Enter Array 2 Size : ");
	scanf("%d",&size2);

	for(i=0; i<size2; i++)
	{
		printf("Enter Array %d  Elemenets",size2);
		scanf("%d",&arr2[i]);
	}
	for(i=0; i<size1; i++)
	{
		merge[i]=arr1[i];
	}
	size=size1+size2;
	for(i=0, k=size1; k<size && i<size2; i++, k++)
	{
		merge[k]=arr2[i];
	}
	printf("Now the new array after merging is :\n");
	for(i=0; i<size; i++)
	{
		printf("%d  ",merge[i]);
	}
	
}
