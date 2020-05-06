//Greatest number of given 3 user inputs

#include<stdio.h>
void main()
{
	int first,second,third;
	printf("Input three numbers : \n");
	scanf("%d %d %d", &first, &second, &third);

	if(first>second && first>third)
		printf("%d is Greatest number\n",first);
	else if(second>third && second>first)
		printf("%d is Greatest number\n",second);
	else
		printf("%d is Greatest number\n",third);
}
