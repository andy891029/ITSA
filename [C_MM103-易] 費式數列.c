#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//1,1,2,3,5,8,13,21,34...

int Fibonacci(int num)
{
    if(num<=2) return 1;
    return Fibonacci(num-1)+Fibonacci(num-2);
}

int main()
{
    int num;

    while(scanf("%d",&num) != EOF)
    {
        printf("%d\n",Fibonacci(num));
    }

    return 0;
}
