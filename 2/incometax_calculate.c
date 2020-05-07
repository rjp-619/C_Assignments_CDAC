//calculatig income tax on various parametres

#include<stdio.h>
#include<string.h>
void main()
{
    int age,gen,sal,i,j,temp,invest,tax,dis;
    printf("enter your age :");
    scanf("%d",&age);
    printf("enter your gender 1=male 0=female:");
    scanf("%d",&gen);
	
    printf("enter salary pakage:");
    scanf("%d",&sal);
    printf("enter your investment:");
    scanf("%d",&invest);

    if(gen==1 && age <50 && invest<100000 && sal<500000)
    {
    	printf("\n no tax");	
    }
    else if(gen==1 && age <50 && invest<100000 && sal>500000)
    {
    	tax=sal*.3;
        dis=0;
    	tax=tax-dis*sal;
    	printf("\n tax is %d",tax);
    }
    else if(gen==1 && age <50 && invest>100000 && sal>500000)
    {
     	tax=sal*.3;
        dis=0.05;
        tax=tax-dis*sal;
        printf("\n tax is %d",tax);
    }
    
    else if(gen==1 && age >50 && invest<100000 && sal>500000)
    {
    	tax=sal*.3;
        dis=0.1;
        tax=tax-dis*sal;
        printf("\n tax is %d",tax);
    }
    
    else if(gen==1 && age >50 && invest>100000 && sal>500000)
    {
    	tax=sal*.3;
        dis=0.15;
        tax=tax-dis*sal;
        printf("\n tax is %d",tax);
    }
    
    else if(gen==1 && age >50 && invest>100000 && sal>500000)
    {
    	tax=sal*.3;
        dis=0.15;
        tax=tax-dis*sal;
        printf("\n tax is %d",tax);
    }
    else if(gen==0 && age <50 && invest<100000 && sal<500000)
    {
    	printf("\n no tax");	
    }
    else if(gen==0 && age <50 && invest<100000 && sal>500000)
    {
    	tax=sal*.3;
        dis=0;
    	tax=tax-dis*sal;
    	printf("\n tax is %d",tax);
    }
    else if(gen==0 && age <50 && invest>100000 && sal>500000)
    {
     	tax=sal*.3;
        dis=0.05;
        tax=tax-dis*sal;
        printf("\n tax is %d",tax);
    }
    
    else if(gen==0 && age >50 && invest<100000 && sal>500000)
    {
    	tax=sal*.3;
        dis=0.1;
        tax=tax-dis*sal;
        printf("\n tax is %d",tax);
    }
    
    else if(gen==0 && age >50 && invest>100000 && sal>500000)
    {
    	tax=sal*.3;
        dis=0.15;
        tax=tax-dis*sal;
        printf("\n tax is %d",tax);
    }
    
    else if(gen==0 && age >50 && invest>100000 && sal>500000)
    {
    	tax=sal*.3;
        dis=0.15;
        tax=tax-dis*sal;
    }
}   
