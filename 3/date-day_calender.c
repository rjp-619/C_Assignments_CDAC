//find day by user input
//by swapnil
#include<stdio.h>

int main()
{
	int arr[12]={1,4,4,0,2,5,0,3,6,1,4,2};
	int sum, d,m,y;
	printf("Enter the date: ");
	scanf("%d",&d);
	printf("Enter the month Number: ");
   	 scanf("%d",&m);
	printf("Enter the year: ");
   	 scanf("%d",&y);
	if(y>2000)
	{
		y%=1000;
		if(y>=100)
		{}
		else y+=100;
	}
	else y%=10;

	sum=(y+(y/4)+arr[m-1]+d)%7;
	sum--;

	if(sum==0) printf("sunday\n");
	else if(sum==1) printf("monday\n");
	else if(sum==2) printf("tuesday\n");
	else if(sum==3) printf("wednesday\n");
	else if(sum==4) printf("thursday\n");
	else if(sum==5) printf("friday\n");
	else if(sum==6) printf("saturday\n");
	return 0;
}


