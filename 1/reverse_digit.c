//Reverse of 3 digit number

#include<stdio.h>
void main()
{
    int input,temp;
    int reverse=0;
    printf("Enter number : \n");
    scanf("%d", &input);
    
    for(int i=0;i<3;i++)
    {
    	temp=input%10;
    	reverse=reverse*10+temp;
    	input=input/10;	
    }

    printf("Reversed number of given input is : %d\n", reverse);
}
