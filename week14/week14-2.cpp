#include <stdio.h>
int main()
{
    char c;
    char s[100];
    printf("��J�@��r�A�i���Ů�A������浲��:");
    gets(s);
    printf("Ū�J�F:%s\n", s);

    printf("��J�^��W:");
    scanf("%s", s);
    printf("�^��W�O: %s", s);

    printf("�A��J�^��W:");
    scanf("%c", &c);
    printf("���GŪ��F: %c", c);
}
