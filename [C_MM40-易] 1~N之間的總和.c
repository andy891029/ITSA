#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num,sum = 0;

    while(scanf("%d",&num) != EOF)
    {
        for(int i = 1;i<num ;i++)
        {
            printf("%d + ",i);
        }
        for(int i = 1;i<=num;i++)
        {
            sum += i;
        }
        printf("%d = %d\n",num,sum);
        sum = 0;
    }

    return 0;
}

