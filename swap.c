#include <stdio.h>
#include <stdlib.h>

int swap (int val)
{
    int tmp = (val & 0xFF00) >> 16;
    val = ((val & 0xFF) << 16) | tmp;

    return val;
}
