//fibonacci series

#include <stdio.h>

int main() 
{
	int a=0,b=1,c,limit;
	printf("Enter limit : \n");
	scanf("%d", &limit);
	printf("%d,%d", a,b);
	for(int i=0;i<limit;i++)
	{   printf(",");
	    c=a+b;
	    printf("%d", c);
	    a=b;
	    b=c;
	    c=a;
	}	
    printf("\n");	
	return 0;
}
