//Swapping two numbers withut using third variable

#include<stdio.h>
void main()
{
	int first,second,c;

	printf("enter two numbers : \n");
	scanf("%d %d",&first, &second);

	first=first^second;
	second=first^second;
	first=first^second;

	 printf("Fisrt = %d\tSecond = %d\n", first,second);
	
}
