//conversion of decimal into binary, octal, Hexadecimal

#include<stdio.h>
void main()
{
    int decimal,binary[8],octal[8],hexadecimal[8];
    printf("Decinal number is = \n");
    scanf("%d", &decimal);


    int a=decimal;
    for(int i=0;i<8;i++)
    {
    	binary[i]=a%2;
    	a=a/2;
    }
    printf("binary of decimal %d is ", decimal);
    for(int i=7;i>=0;i--)
    	printf("%d",binary[i]);
    printf("\n");



    a=decimal;
    for(int i=0;i<8;i++)
    {
            octal[i]=a%8;
            a=a/8;
    }
    printf("octal of decimal %d is ", decimal);
    for(int i=7;i>=0;i--)
        printf("%d",octal[i]);
    printf("\n");




    a=decimal;
    for(int i=0;i<8;i++)
    {
       hexadecimal[i]=a%16;
       if(hexadecimal[i]>=10)
	       hexadecimal[i]=hexadecimal[i]+55;
       else
	       hexadecimal[i]=hexadecimal[i]+48;
       a=a/16;
    }
    printf("hexadecimal of decimal %d is ", decimal);
    for(int i=7;i>=0;i--)
        printf("%c",hexadecimal[i]);
    printf("\n");
}	



//////////////////////////*************************************//////////////////////////////
//////////****   universal logic (user defined conversion)  ****  ////////////////

////  ////  //// refered to firm codes dot com  while writing below code /////// // / /

/*
#include <stdio.h>

char *convert(unsigned int num, int base) ;

int main( )
{
    int input_num, convert_to;    
    
    printf("Enter a number in decimal : \n");
    scanf("%d", &input_num);
    
    printf("Choose option : Hexadecimal->16 \t Octal->8 \t Binary->2\n");
    scanf("%d", &convert_to);
    
	printf("%s", convert(input_num, convert_to));
	
	return 0;
}

char *convert(unsigned int num, int base) 
{
	static char buffer[33]; 
	char *ptr; 
	
	ptr = &buffer[32]; 
	*ptr = '\0'; 
	
	do 
	{ 
		*--ptr = "0123456789ABCDEF"[num%base]; 
		num /= base; 
	}while(num != 0); 
	
	return(ptr); 
}


*/
