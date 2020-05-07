//armstrong check

#include <stdio.h>

int main() 
{
	int num,a=0,b=0;
	int s[3];
	
	printf("Enter a number : \n");
	scanf("%d", &num);

	int original=num;
	for(int i=0;;i++)
	{
	    s[i]=num%10;
	    a=s[i]*s[i]*s[i];
	    b=b+a;
	    num=num/10;
	    if(num==0)
	    break;
	}

	if(b==original)
	printf("%d is an Armstrong number\n", original);
	else
	printf("%d is not an Armstrong number\n", original);
	
	return 0;
}
