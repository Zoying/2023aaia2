#include <stdio.h>
int main()
{
    int a = 10;
    printf("%5d 佔了5格\n", a);
    float pi = 3.141592653589793238462643383279;
    printf("%f 浮點數只有8格\n", pi);
    printf("%12f 浮點數只有12格\n", pi);
    printf("%12.10f 印12格，點的右邊10格\n", pi);
    double pi2 = 3.141592653589793238462643383279;
    printf("%12.10f 兩倍浮點數double印點右邊10格", pi2);
}
