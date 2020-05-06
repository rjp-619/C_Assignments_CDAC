//sum and avg of given numbers

#include<stdio.h>

void main()
{
	int n[10];
	int count;
	int sum=0;
	float avg;
	
	printf("Enter total ipnut numbers : \n");
	scanf("%d", &count);
	printf("Enter numbers : \n");
	for(int i=0;i<count;i++)
		scanf("%d",&n[i]);
	
	for(int i=0;i<count;i++)
		sum=sum+n[i];
    printf("The sum of all input digits is %d\n",sum);
	
	avg=(float)sum/count;
	printf("Avg of input numbers is %f", avg);
	
}
