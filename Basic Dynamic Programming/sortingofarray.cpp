#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i,j,temp;
	printf("Enter the size of array:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("\nEnter the elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<=i;j++)
		{
			if (*(a+i)<*(a+j))
		 	{
		 		temp=*(a+i);
		 		*(a+i)=*(a+j);
		 		*(a+j)=temp;
			 }
		}
	}
	printf("\nSorted Array:\n");
	for (i=0;i<n;i++)
	{
		printf("\n%d",*(a+i));
	}
	return 0;
}
