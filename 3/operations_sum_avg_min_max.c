// taking array input and output sum, avg, min, max

#include<stdio.h>
void main()
{
    int a[10],i,min,max,sum=0,temp;
    float avg;

    printf("Enter array of 10 numbers : \n");
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);

    for(i=0;i<10;i++)
	    sum=sum+a[i];

    avg=(float)sum/10;
    max=a[0];
    for(i=0;i<10;i++)
	    if(a[i]>max)
	    	max=a[i];
    min=a[0];	
    for(i=0;i<10;i++)
        if(a[i] < min)
                min=a[i];

    printf("Sum: %d\n",sum);
    printf("Avg: %f\n",avg);
    printf("Max: %d\n",max);
    printf("Min: %d\n",min);
}
