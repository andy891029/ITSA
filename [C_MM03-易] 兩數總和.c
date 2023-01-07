#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int number1,number2,answer;
    while(scanf("%d %d",&number1,&number2) != EOF)
    {
        answer = number1+number2;
        printf("%d\n",answer);
    }
    return 0;
}
