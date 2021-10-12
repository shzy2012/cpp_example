#include <math.h>
#include <stdio.h>

// 使用系统静态库
int main (void)
{
    double x = 2.0;
    double y = sin (x);
    printf ("The value of sin(2.0) is %f\n", y);
    return 0;
}