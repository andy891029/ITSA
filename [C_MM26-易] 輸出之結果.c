#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    while(scanf("%d",&num) != EOF)
    {

        for(int i = 1;i<=num;i++)
        {
            printf("%d*%d=%d\n",i,i,i*i);
        }
    }

    return 0;
}
