#include <stdio.h>

int main(void) {
　　　int32_t x;

    double result;

    scanf("%d", &x);

    int32_t y = (int32_t)((uint32_t)x + 100U);

    result = 1.0 / (double)y;

    printf("%.15f\n", result);/* 課題0404: 入力されたintのデータxに+100したx+100の逆数を，doubleとして計算し，小数点以下15桁として表示するプログラムを書け．*/
    


    
    return 0;
}
