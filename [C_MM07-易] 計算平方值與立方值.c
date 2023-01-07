#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    while(scanf("%d",&num) != EOF)
    {
        printf("%d %d %d\n",num,num*num,num*num*num);
    }
    return 0;
}
