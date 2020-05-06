//checking input year is leap year or not

#include<stdio.h>

void main()
{
    int  year;
    printf("Input year : \n");
    scanf("%d", &year);
    if((year%4==0)&&(year%400==0))
		printf("%d is a Leap Year\n",year);
	else if((year%4==0) && (year%400!=0)&& (year%100==0))
		printf("%d is a not a Leap Year\n",year);
	else if(year%4==0)
		printf("%d is a Leap Year\n",year);
	else
		printf("%d is not a Leap Year\n",year);

}
