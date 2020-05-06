//factorial

#include<stdio.h>

void main()
{
	int n,fact=1;
	printf("Enter number : \n");
	scanf("%d", &n);
	
	for(int i=n;i>0;i--)
	    fact=fact*i;
	
	printf("Factorial is %d\n", fact);
}

