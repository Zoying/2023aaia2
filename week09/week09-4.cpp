#include <stdio.h>
#include <string.h>
int main()
{
    char line[100];
    printf("請輸入一堆字母，不要有空格");
    scanf("%s", line);

    int N = strlen(line);
    printf("字串的長度:%d\n", N);
}
