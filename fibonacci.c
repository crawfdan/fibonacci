#include "fibonacci.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
    __uint32_t i;
    for(i=1; i < NUM_ELEMENTS; i++)
    {
        printf("%u\t", fibonacci(i));
    }
    return 0;
}

__uint32_t fibonacci(__uint32_t n)
{
    //first two values are 1
    if (n == 1 || n == 2)
    {
        return 1;
    }

    else
    {
        //recursive return of previous two values
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}