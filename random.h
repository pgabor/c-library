#include <stdlib.h>

///0 és max között generál véletlenszámot (max is beleértve)
long randomWithMax(unsigned long max)
{
    unsigned long b = max+1;
    unsigned long r = (unsigned long)RAND_MAX+1;
    unsigned long bs = r / b;
    unsigned long d = r % b;

    long x;
    while(r - d <= (unsigned long)(x = random()));
    return x/bs;
}
