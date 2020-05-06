#include<stdio.h>
void main()
{
	char x;
	printf("Enter an alphbet: \n");
	scanf("%c", &x);

	if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'|| x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
		printf("%C is vowel\n", x);
	else 
		printf("%c is not a vowel\n", x);
	
}
