#include<stdio.h>
int main()
{
	int x, n=1;
	printf("enter a number whose table is to be printed:");
	scanf("%d",&x);
	for (;n<=10;){
		printf("%d*%d = %d\n",x,n,x*n);
		n++;
	}		
}
