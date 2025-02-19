#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *ptr;

    // メモリ領域を確保できなかったケース
    if ((ptr = (char *)malloc(1024)) == NULL)
    {
        perror("malloc()");
        exit(1);
    }

    free(ptr); // 確保したメモリ領域を解放

    // free(ptr)で解放した後、ptrはもはや有効なメモリ領域を指していない。
    // 解放されたメモリ領域は再利用される可能性があり、その後にそのポインタが不正に参照されると未定義の動作が発生するため、NULLに設定。
    ptr = NULL;

    return 0;
}