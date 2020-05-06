//number pattern
//   1
//  222
// 33333
//4444444
//upto n
#include<stdio.h>
void main()
{
    int n,p=0,v;    
    printf("Enter level: ");
    scanf("%d",&n);
    v=n;
    for(int i=0;i<=n;i++)
    {
	    for(int j=0;j<v;j++)
	    	printf(" ");
	    v--;
	    for(int k=0;k<2*i-1;k++)
	    	printf("%d", p);
	    printf("\n");
	    p++;
    }
}

