#include <stdio.h>

int main()
{
       for(int i = 1; i <= 5; i++)
    {
        printf("%d", i);
        for(int j = i; j >= 1; j--)
        {
            printf("*");
        }
    }

}
