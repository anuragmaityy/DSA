#include<stdio.h>
#include<stdlib.h>

void inputmatrix(int *arr,int r,int c)
{
	int i,j;
	*arr=NULL;
	arr=(int*)malloc(r*sizeof(int));
	for (i=0;i<r;i++)
		*(arr+i)=(int*)malloc(c*sizeof(int));
	printf("\nEnter the elements of the matrix:");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",*(arr+i)+j;
		}
	}
}


void nonzero(int *arr,int r,int c)
{
	int i,j,count=0;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			if (*(arr+i)+j!=0)
			count++;
		}
	}
	printf("Total non-zero elements present: %d",c);
}

void leadingsum(int *arr,int r,int c)
{
	int s=0,i,j;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			if (j>i)
			s+=*(arr+i)+j; 
		}
	}
	printf("The sum of the elements above the leading diagonal is %d",s);
}

void show(int *arr,int r,int c )
{
	int i,j;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			if ((i+j)>=r)
				printf("%d  ",*(arr+i)+j);
			else
				printf("-  ");
		}
		printf("\n");
	}
}

void digproduct(int *arr,int r,int c)
{
	int i,j,p1=1,p2=1;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			if (i==j)
				p1*=*(arr+i)+j;
			break;
			if ((i+j)==2)
				p2*=*(arr+i)+j;
			break;
		}
	}
	printf("The product of the major diagonal is %d\n",p1);
	printf("The product of the minor diagonal is %d\n",p2);
}

//main_function
int main()
{
	int *arr, r1,c1,i,j,ch;
	printf("Enter your choice:\n1.Find no. of non-zero elements.\n2.Find the sum of the elements above the leading diagonal.\n3.Display the elements below the minor diagonal.\n4.Find the product of the diagonal elements.\n");
	scanf("%d",&ch);
	printf("Enter the order of matrix:\n");
	scanf("%d %d",&r1,&c1);
	inputmatrix(arr,r1,c1);
	switch(ch)
	{
		case 1:
			nonzero(arr,r1,c1);
			break;
		case 2:
			leadingsum(arr,r1,c1);
			break;
		case 3:
			show(arr,r1,c1);
			break;
		case 4:
			digproduct(arr,r1,c1);
		default:
			printf("\nWrong Choice.\n");
	}
	return 0;
}
