//prime number

#include <stdio.h>

int main()
{
	int num,a=0;
	printf("Enter limit : ");
	scanf("%d", &num);
	for(int i=1;i<=num;i++)
	{
	    for(int j=1;j<=i;j++)
	    {
	        if(i%j==0)
	        a++;
	    }
	    if(a==2)
	    {
	        printf(" %d",i);
	    }
	    a=0;
	    
	   
	}
	printf("\n");
	return 0;
} 
