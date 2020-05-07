//LCM & GCD

#include<stdio.h>
int main()
{
	int a,b;
	printf("Input two numbers (Format - 1st number (space) 2nd Number) : ");
	scanf("%d %d", &a, &b);
    
    int m,g,l;
	if(a>b)             // condition to check if a > b or b > a
    	m=b;
    else
    	m=a;
    for(int i=1;i<=m;i++)           //Method to get GCD
    	if(a%i==0 && b%i==0)        
    		g=i;

    l=(a*b)/g;              //Formula for LCM
    
     
	printf("GCD of %d and %d is %d\n", a,b,g);
	
	printf("LCM of %d and %d is %d\n", a,b,l);

return 0;
}
