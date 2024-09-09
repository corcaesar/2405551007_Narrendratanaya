#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   int b;
   scanf("%d",&b );

    if (b%2 == 0)
    {
        printf ("bilangan genap");
    }
        
    else if (b%2 == 1)
    {
        printf ("bilangan ganjil");
    }

    return 0;
}