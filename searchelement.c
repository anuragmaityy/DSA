#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,n,i,p,found;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
		printf("Enter the elements of the array:\n");
		for (i=0;i<n;i++)
		{
			scanf("%d",arr+1);
		}
		printf("Enter the element to be searched: ");
		scanf("%d",&p);
		for (i=0;i<n;i++)
		{
			if (p==arr[i])
			{
				printf("\n%d is found at position %d.\n",p,i+1);
				break;
			}
		}
	return 0;
}