#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num,answer = 1;
    while(scanf("%d",&num) != EOF)
    {
        if(num<31)
        {
            for(int i = 0;i<num;i++)
            {
                answer *= 2;
            }
            printf("%d\n",answer);
        }
        else
        {
            printf("Value of more than 31\n");
        }

    }
    return 0;
}


