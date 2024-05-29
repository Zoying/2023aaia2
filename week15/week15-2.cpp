#include <stdio.h>
int main()
{
    if ('A' == 65) printf("A 就是 65\n");
    printf("A的值是%d\n", 'A', 65);
    printf("A的值是%d\n", 'B', 66);
    printf("C的值是%d\n", 'C', 67);
    printf("Z的值是%d\n", 'Z', 90);
    printf("\n");
    printf("A的值是%d\n", 'a', 97);
    printf("A的值是%d\n", 'b', 98);
    printf("C的值是%d\n", 'c', 99);
    printf("Z的值是%d\n", 'z', 122);
}
