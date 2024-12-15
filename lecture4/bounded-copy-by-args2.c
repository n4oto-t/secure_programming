/*
動的メモリ確保
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{ /* assume that argc == 3 */

    // ここで*bufというポインタ変数を宣言しているが、この時点ではメモリ領域は割り当てられていない。
    char *buf;
    int len;

    len = strlen(argv[1]) + strlen(argv[2]);

    /*
    動的にメモリ領域を確保。確保できなかった場合、mallocはNULL返す
    +1は末尾のNUll用
    */
    if ((buf = malloc(len + 1)) == NULL)
    {
        exit(1);
    }

    strcpy(buf, argv[1]);
    strcat(buf, argv[2]);
    printf("%s\n", buf);

    free(buf);
    return 0;
}