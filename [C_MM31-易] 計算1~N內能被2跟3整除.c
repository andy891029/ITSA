#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num,sum = 0;

    while(scanf("%d",&num) != EOF)
    {

        for(int i = 6;i<=num;i++)
        {
            if(i%6 == 0 &&  i%12!=0)
            {
                sum+=i;
            }

        }
        printf("%d\n",sum);
        sum = 0;
    }

    return 0;
}
