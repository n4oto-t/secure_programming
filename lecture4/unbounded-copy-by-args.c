#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
argv[0]には実行ファイル名が入る。argv[1]以降に、実際にコマンドラインから渡された引数が入る。
*/
int main(int argc, char *argv[])
{

    /* assume that argc == 3 */
    char buf[16];
    strcpy(buf, argv[1]);
    strcat(buf, argv[2]); /* argv[1] + argv[2] */
    printf("%s\n", buf);
    return 0;
}
