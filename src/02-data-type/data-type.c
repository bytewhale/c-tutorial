//
// Created by HANG ZHANG on 2021/11/17.
//

/**
 * @description: C 语言数据类型
 * @example: char - 字符数据类型
 * @example: short - 短整型
 * @example: long - 长整型
 * @example: long long - 更长的整型
 * @example: float - 单精度浮点数
 * @example: double - 双精度浮点数
 */

#include <stdio.h>

int main() {
    // 字符数据类型
    char str = "Hello world";
    printf("%c\n", str);

    // 整型
    int age = 20;
    printf("%d\n", age);

    // 短整型
    short num = 10;
    printf("%d\n", num);

    // 长整型
    long long id = 1928348384;
    printf("%lld\n", id);

    // 单精度浮点数
    float weight = 11.1;
    printf("%f\n", weight);

    // 双精度浮点数
    double score = 100.00;
    printf("%f\n", score);

    return 0;
}

