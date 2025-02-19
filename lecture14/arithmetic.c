#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

int main()
{

    // char型なので1バイト確保する。
    // 符号付きcharなので、1バイトで表現できる範囲は-128~127
    signed char a, b, c, d;
    a = 80;
    b = 90;
    c = -120;

    // a+bは170であり、char型で表現できる範囲を超えている。オーバーフローが起きないのは、char型の変数がint型に暗黙的に変換されて計算されるため。
    d = a + b + c; // 50

    printf("%d\n", d);
    return 0;
}