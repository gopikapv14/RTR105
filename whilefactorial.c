#include <stdio.h>

int main()
{
    int a = 0;
    
    while(0)
    {
        printf("can text(while(0))\n");
    }
    while(1)
    {
        printf("can text(while(1))\n");
        break;
    }

    while(a<=20)
    {
        printf("a = %d\n",a);
        a += 2;
    }
    printf("after loop:\n");
    printf("a = %d\n",a);
    printf("0 <= 20 -result is %d\n", 0<=20);
    printf("22 <= 20 -result is %d\n", 22<=20);
    
    
    return 0;
}


