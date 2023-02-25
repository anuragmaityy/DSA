#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("Enter the elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	printf("\nArray in reverse order:\n");
	for (i=n-1;i>=0;i--)
	{
		
		printf("%d ",*(a+i));
	}
	return 0;
}