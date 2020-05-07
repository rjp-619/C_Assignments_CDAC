//perfect number

#include<stdio.h>

int main()
{
	int num, sum=0;
	printf("enter the number\n");
	scanf("%d", &num);

	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum/2==num)
		printf("perfect number\n");
	else
		printf("Not perfect number\n");
	
}
