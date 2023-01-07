
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num,temp = 0,sum = 0;

    while(scanf("%d",&num) != EOF)
    {
        for(int i =3;i<=num;i++)
        {
            if(i%3 == 0)
            {
                sum += i;
            }
        }

        printf("%d\n",sum);
        temp = 0;
        sum = 0;
    }

    return 0;
}
