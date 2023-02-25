#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, *arr,i;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter the array elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	int min,max,c=0;
	printf("Enter the two numbers:\n");
	scanf("%d %d",&min,&max);
	for (i=0;i<n;i++)
	{
		if (*(arr+i)>=min&&*(arr+i)<=max)
		{
			printf("%d ",*(arr+i));
			c++;
		}
	}
	printf("\n No. of variables between minimum and maximum: %d",c);
	return 0;
}