//pascal triangle

#include<stdio.h>

int main()
{
        int r;
        int count =1;

        printf("number of rows = \n");
        scanf("%d", &r);

        for(int i=0;i<r;i++)
        {
                for(int j=1;j<=r-i;j++)
                        printf("  ");

                for(int k=0;k<=i;k++)
                {       if(k==0 || i==0)
                                count=1;
                        else
                                count=count*(i-k+1)/k;
                        printf("%4d", count);
                }
                printf("\n");

        }


return 0;

}

