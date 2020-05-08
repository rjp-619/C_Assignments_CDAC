//formated I/Os

#include<stdio.h>
void main()
{
    int x;
    float y;
    printf("enter an integer number : \n");
    scanf("%d",&x);
    printf("number in 5d format is : %5d\n", x);
    
    printf("number in 05d format is : %05d\n", x);
    printf("number in -5d format is : %-5d\n", x);
    
    
    printf("enter a float number : \n");
    scanf("%f", &y);
    printf("number in 2.2f format is : %2.2f\n", y);
    printf("number in .3f format is : %.3f\n", y);

}	



///////////////////////************************//////////////////
/////////****    Practice trials extra    ******////////

/*
int x=5;
float f=532.1234;
printf("\n5d\n%5d", x);
printf("\n05d\n%05d", x);
printf("\n-5d\n%-5d", x);
printf("\n8.2f\n%8.2f", f);
printf("\n.2f\n%.2f", f);
//printf("\n5d %d", x);


*/
