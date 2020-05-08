//post and pree operations observations 

#include<stdio.h>

void main()
{
    int k,i;
    printf("enter vlue of i = \n");
    scanf("%d", &i);
    k=i++;
    printf("Post Increment is %d\n",k);
    k=++i;
    printf("Pre Increment is %d\n",k);
    
    int x,y;
    printf("enter vlue of x = \n");
    scanf("%d", &x);
    y=x++*10;
    printf("Post Increment * 10 is %d\n", y);
    y=++i*10;
    printf("Pre Increment * 10 is %d\n", y);
    
    int p,q;
    printf("enter vlue of p\n");
    scanf("%d", &p);
    q=p--/3;
    printf("Post Decrement/3 is %d\n", p);
    q=--p/3;
    printf("Pre Decrement/3 is %d\n", p);

}	


////////////////******************///////////////////
///////////***  PRACTICE TRIALS  ****///////////



/*
int a[5]={10,20,30,40,50};

printf("%d\n", a[0]);		//20=STAR
//a++;		Error
//*a++;		Error
//&a++;		Error


//(*a)++;		// a[1]=20==STAR
//(a)++;	Error
//(&a)++;	Error

int *p=a;
printf("%d\n", *p);   //10



int *q=*(&a+1)-1;
printf("%d\n", *q);   //50
//
//*p++;			//*p=20
//p++;			//*p=20
//*++p;			//*p=20
//(*p)++;		//*p=11
//++(*p);		//*p=11
//++*p;			//*p=11
//*(p++);		//*p=20
//*(++p);		//*p=20	


//printf("%d\n", a);
printf("%d\n", *p);

*/



