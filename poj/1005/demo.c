#include <stdio.h>
#include <math.h>

int main()
{
    printf("%f, %f", trunc(3.5), round(3.5));
    printf("%f, %f", ceil(3.4), trunc(3.4));
    return 0;
}
