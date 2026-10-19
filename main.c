#include <stdio.h>

int main(void) {
 int x;

    int y;

    double result;

    scanf("%d", &x);

    y = x + 100;

    result = 1.0 / y;

    printf("%.15f\n", result);  /* 課題0404: 入力されたintのデータxに+100したx+100の逆数を，doubleとして計算し，小数点以下15桁として表示するプログラムを書け．*/
    


    
    return 0;
}
