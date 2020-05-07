//Student grade calculation

#include<stdio.h>
int main()
{
	int sub,i;
	float percent;
	int sum=0;
	int marks[50];
	printf("Total subjects = ");
	scanf("%d",&sub);
	//printf("\nenter marks\n");
	for(i=1;i<=sub;i++)
	{
		printf("\nmarks of subject %d=", i);
		scanf("%d", &marks[i]);
		sum=sum+marks[i];
	//    printf("   %d   ", sum);
	}
	printf("\n");
	//printf("   %d   ", sum);
	percent=sum*100;
	percent=percent/(sub*100);
//	printf("   %f   ", percent);
	if(percent>=80)
		printf("Distinction\n");
	else if(percent>60)
		printf("First class\n");
	else if(percent>45)
		printf("Second Class\n");
	else if(percent>32)
		printf("Third Class\n");
	else
	    printf("Fail\n");
	
return 0;	
}
