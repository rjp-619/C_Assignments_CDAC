//
//pattern
//1
//22
//333 
//4444
//55555
//upto n 

#include<stdio.h>
void main()
{
    int n,p=1;
    printf("size : \n");
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
	    for(int j=0;j<=i;j++)
	    	printf("%d",p);
	    printf("\n");
	    p++;
    }


}

