//prime number check

#include <stdio.h>

int main() {
	int no, a=0;
	printf("Enter a random number : \n");
	scanf("%d", &no);
	if(no==1)
	{    printf("The number is Prime\n");
	     return 0;
    }
	for(int i=1;i<=no;i++)
	    if(no%i==0)
	        a++;	        
	        
	if(a==2)
	    printf("The number is Prime\n");
	else
	    printf("The number is not prime\n");
	
return 0;
}
