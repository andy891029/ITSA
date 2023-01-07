#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    while(scanf("%d",&num) != EOF)
    {
        if((num/100)*(num/100)*(num/100)+((num%100)/10)*((num%100)/10)*((num%100)/10)+(num%10)*(num%10)*(num%10) == num)
        printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}

