#include <stdio.h>
int main()
{
    char c;
    char s[100];
    printf("輸入一行字，可有空格，直到跳行結束:");
    gets(s);
    printf("讀入了:%s\n", s);

    printf("輸入英文名:");
    scanf("%s", s);
    printf("英文名是: %s", s);

    printf("再輸入英文名:");
    scanf("%c", &c);
    printf("結果讀到了: %c", c);
}
