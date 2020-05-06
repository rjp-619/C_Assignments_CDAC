//number pattern
//   1
//  22
// 333
//4444
//upto n
#include<stdio.h>
void main()
{
	int n,v,p=1;
	printf("size : \n");
	scanf("%d", &n);
	v=n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<v-1;j++)
		{
			printf(" ");
		}
		v--;
		for(int k=0;k<=i;k++)
		{
			printf("%d", p);
		}
		printf("\n");
		p++;
	}
}
