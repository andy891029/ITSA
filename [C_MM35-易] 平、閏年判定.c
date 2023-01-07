#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    while(scanf("%d",&num) != EOF)
    {
        if(num%400 == 0)
        {
            printf("Bissextile Year\n");
        }
        else if(num%4 == 0 && num%400 !=0)
        {
            printf("Bissextile Year\n");
        }
        else printf("Common Year\n");
    }

    return 0;
}
