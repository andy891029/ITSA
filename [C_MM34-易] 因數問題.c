#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    while(scanf("%d",&num) != EOF)
    {

        for(int i = 1;i<num;i++)
        {
            if(num%i == 0)
            {
                printf("%d ",i);
            }
        }
        printf("%d",num);
        printf("\n");
    }

    return 0;
}
