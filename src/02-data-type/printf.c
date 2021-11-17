//
// Created by HANG ZHANG on 2021/11/17.
//

#include <stdio.h>

int main()
{
    // 1.1 基本用法
    // printf() 的作用是将参数文本输出到屏幕。它名字里面的 f 代表 format（格式化），表示可以定制输出文本的格式。
    printf("Hello World\n");
    printf("Hello\n");
    printf("World\n");

    // 1.2 占位符
    // printf() 可以在输出文本中指定占位符。所谓“占位符”，就是这个位置可以用其他值代入。
    printf("There are %i pair of Air Jordan one\n", 5);
    // 常用地占位符除了%i，还有%s表示代入的是字符串。
    printf("Hello C, I'm %s and i am %i years old\n", "HANG", 29);
    // printf()参数与占位符是一一对应关系，如果有n个占位符，printf()的参数就应该有n + 1个。如果参数个数少于对应的占位符，printf()可能会输出内存中的任意值。

    // 1.3 输出格式
    // printf()可以定制占位符的输出格式。
    // 允许限定占位符的最小宽度。%5d表示这个占位符的宽度至少为5位。如果不满5位，对应的值的前面会添加空格。
    printf("%5d\n", 888);
    // 输出的值默认是右对齐，即输出内容前面会有空格；如果希望改成左对齐，在输出内容后面添加空格，可以在占位符的%的后面插入一个-号。
    printf("%-5d\n", 666);
    printf("%12f\n", 123.45);
    // %+d可以确保输出的数值，总是带有正负号。
    printf("%+d\n", 3829);
    printf("%+d\n", -3829);
    // 限定小数位数
    printf("The Score is %.2f\n", 123.893);
    // 最小宽度和小数位数这两个限定值，都可以用*代替，通过printf()的参数传入。
    printf("%*.*f\n", 8, 2, 382.9);
    // 1.4 输出部分字符串
    printf("%.8s\n", "Hello World");
    // printf()的占位符有许多种类，与 C 语言的数据类型相对应。下面按照字母顺序，列出常用地占位符，方便查找。

    //%a：浮点数。
    //%A：浮点数。
    //%c：字符。
    //%d：十进制整数。
    //%e：使用科学计数法的浮点数，指数部分的e为小写。
    //%E：使用科学计数法的浮点数，指数部分的E为大写。
    //%i：整数，基本等同于%d。
    //%f：小数（包含float类型和double类型）。
    //%g：6个有效数字的浮点数。整数部分一旦超过6位，就会自动转为科学计数法，指数部分的e为小写。
    //%G：等同于%g，唯一的区别是指数部分的E为大写。
    //%hd：十进制 short int 类型。
    //%ho：八进制 short int 类型。
    //%hx：十六进制 short int 类型。
    //%hu：unsigned short int 类型。
    //%ld：十进制 long int 类型。
    //%lo：八进制 long int 类型。
    //%lx：十六进制 long int 类型。
    //%lu：unsigned long int 类型。
    //%lld：十进制 long long int 类型。
    //%llo：八进制 long long int 类型。
    //%llx：十六进制 long long int 类型。
    //%llu：unsigned long long int 类型。
    //%Le：科学计数法表示的 long double 类型浮点数。
    //%Lf：long double 类型浮点数。
    //%n：已输出的字符串数量。该占位符本身不输出，只将值存储在指定变量之中。
    //%o：八进制整数。
    //%p：指针。
    //%s：字符串。
    //%u：无符号整数（unsigned int）。
    //%x：十六进制整数。
    //%zd：size_t类型。
    //%%：输出一个百分号。
}

