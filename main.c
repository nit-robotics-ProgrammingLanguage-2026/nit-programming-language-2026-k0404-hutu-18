#include <stdio.h>

int main(void) {
　    int x;
    double ans;
    scanf("%d", &x);

    ans = 1.0 / (double)(x + 100);

    printf("%.15lf\n", ans); 　/* 課題0404: 入力されたintのデータxに+100したx+100の逆数を，doubleとして計算し，小数点以下15桁として表示するプログラムを書け．*/


    return 0;
}
