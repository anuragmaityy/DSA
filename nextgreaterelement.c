#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,j,n,temp;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("Enter the elements of the array:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	printf("Element\t\tNGE\n");
	for (i=0;i<n;i++)
	{
		temp=-1;
		for (j=i+1;j<n;j++)
		{
			if (*(a+j)>*(a+i))
			{
				temp=*(a+j);
				break;
			}
		}
		printf("%d ------------- %d\n",*(a+i),temp);
	}
	return 0;
}