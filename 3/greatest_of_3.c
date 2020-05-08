//greatest out of 3

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the numbers : \n");
	scanf("%d%d%d", &a,&b,&c);

	(a>b&&a>c)?printf("%d is greatest\n", a):((b>a && b>c)?printf("%d is greatest\n", b):printf("%d is greatest\n", c));

return 0;

}

