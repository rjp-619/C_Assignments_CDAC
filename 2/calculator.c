//calculator

#include<stdio.h>
void main()
{
	int A,n1,n2,out;
while(1)
{
	printf("Enter the numbers : \n");
	scanf("%d %d", &n1, &n2);

	printf("Choose from the following :\n\t1.ADD(+)\t2.SUBTRACT(-)\t3.MULTIPLY(x)\t4.DIVIDE(/)\n");
	scanf("%d", &A);
	
	switch(A)
	{
		case 1:
			out=n1+n2;
			printf("Addition is %d\n", out);
			break;

		case 2:
            out=n1-n2;
                        printf("Subtraction is %d\n",out);
                        break;
        
		case 3:
                        out=n1*n2;
                        printf("Multiplication is %d\n",out);
                        break;
        
		case 4:
                        out=n1/n2;
                        printf("Division is %d\n",out);
                        break;

		default:
			printf("Wrong input\n");
        }
}	
}


