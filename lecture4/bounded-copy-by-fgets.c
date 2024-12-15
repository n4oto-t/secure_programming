#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buf[16];
    printf("Name>");

    // bufは固定長であるが、gets()は入力の長さに制限がない。バッファオーバーフローを引き起こす。
    gets(buf);

    // 代わりにfgetsを使う。
    fgets(buf, sizeof(buf), stdin);

    printf("Hello, %s\n", buf);

    return 0;
}

int improved_main(int argc, char *argv[])
{ /* assume that argc == 3 */
    char buf[16];
    int len;

    len = strlen(argv[1]) + strlen(argv[2]);

    // 連結結果が16バイト以上になる場合、error出す。
    if (len + 1 > sizeof(buf))
    {
        puts("error: input too long");
        return 1;
    }

    strcpy(buf, argv[1]);
    strcat(buf, argv[2]);
    printf("%s\n", buf);
    return 0;
}
