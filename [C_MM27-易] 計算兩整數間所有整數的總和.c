#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num1,num2,sum = 0;

    while(scanf("%d %d",&num1,&num2) != EOF)
    {
        if(num1 <= num2)
        {
            for(int i = num1;i<=num2;i++)
            {
                sum += i;
            }
        }
        else
        {
            for(int i = num2;i<=num1;i++)
            {
                sum += i;
            }
        }

        printf("%d\n",sum);
        sum = 0;
    }

    return 0;
}

