#include <stdio.h>
int main()
{
    if ('A' == 65) printf("A �N�O 65\n");
    printf("A���ȬO%d\n", 'A', 65);
    printf("A���ȬO%d\n", 'B', 66);
    printf("C���ȬO%d\n", 'C', 67);
    printf("Z���ȬO%d\n", 'Z', 90);
    printf("\n");
    printf("A���ȬO%d\n", 'a', 97);
    printf("A���ȬO%d\n", 'b', 98);
    printf("C���ȬO%d\n", 'c', 99);
    printf("Z���ȬO%d\n", 'z', 122);
}
