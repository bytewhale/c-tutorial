//
// Created by HANG ZHANG on 2021/11/18.
//

#include <stdio.h>



int main()
{
    // C 语言的变量，必须先声明后使用。如果一个变量没有声明，就直接使用，会报错。每个变量都有自己的类型（type）。声明变量时，必须把变量的类型告诉编译器
    // 注意，声明变量的语句必须以分号结尾。一旦声明，变量的类型就不能在运行时修改。
    int weight = 456, height;
    height = 123;
    printf("%i\n", height);
    printf("%d\n", weight);
    // error: use of undeclared identifier 'wi'
    // printf("$d", wi);

    // 变量的作用域
    // 作用域（scope）指的是变量生效的范围。C 语言的变量作用域主要有两种：文件作用域（file scope）和块作用域（block scope）。
    // 文件作用域（file scope）指的是，在源码文件顶层声明的变量，从声明的位置到文件结束都有效。

    int num = 789;
    if(height <= weight) {
        printf("%d\n", num);
    }

    return 0;
}