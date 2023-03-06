#include<stdio.h>
int fibo(int);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("The value of the term %d of fibonacci series is %d.",n,fibo(n));
	return 0;
}
int fibo (int i)
{
if (i==0 || i==1)
return i;
else
return (fibo(i-1)+fibo(i-2));
}