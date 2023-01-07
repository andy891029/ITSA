#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    while(scanf("%d",&num) != EOF)
    {

        for(int i = 35;i<=num;i++)
        {
            if(i%35 == 0 && num-i >35)
            {
                printf("%d ",i);
            }
            else if(i%35 == 0 && num-i <35)
            {
                printf("%d",i);
            }
        }
        printf("\n");
    }

    return 0;
}
