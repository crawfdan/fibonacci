#include "fibonacci.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    for(i=0; i < NUM_ELEMENTS; i++)
    {
        printf("%u\t", fibonacci(i));
    }
    return 0;
}

__uint32_t fibonacci(__uint32_t n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }

    else
    {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}