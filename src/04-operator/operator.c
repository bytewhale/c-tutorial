//
// Created by HANG ZHANG on 2021/11/18.
//

#include <stdio.h>

int main()
{
    // 1. 算术运算符
    /**
     * +：正值运算符（一元运算符）
     * -：负值运算符（一元运算符）
     * +：加法运算符（二元运算符）
     * -：减法运算符（二元运算符）
     * *：乘法运算符
     * /：除法运算符
     *  %：余值运算符
     */
    // （1）+，-;一元运算符-用来改变一个值的正负号。
    int x = -12;

    printf("%d\n", x);
    // (2) *
    int num = 6;
    printf("%d\n", num * num);


    // (3) /
    // 6 / 4得到的结果是1.0，而不是1.5。原因就在于 C 语言里面的整数除法是整除，只会返回整数部分，丢弃小数部分。
    // 如果希望得到浮点数的结果，两个运算数必须至少有一个浮点数，这时 C 语言就会进行浮点数除法。
    float y = 6 / 4;

    printf("%f\n", y);
    printf("%f\n", 6.0 / 4);

    // (4) 运算符 % 表示求模运算，即返回两个整数相除的余值。这个运算符只能用于整数，不能用于浮点数。
    printf("%d\n", 6 % 4); // 2
    // 负数求模的规则是，结果的正负号由第一个运算数的正负号决定。
    printf("%d\n", -9 % 2); // -1

    // 自增运算符，自减运算符
    /**
     * ++：自增运算符
     * --：自减运算符
     */
    // 这两个运算符放在变量的前面或后面，结果是不一样的。
    // ++var和--var是先执行自增或自减操作，再返回操作后var的值；
    // var++和var--则是先返回操作前var的值，再执行自增或自减操

    int i = 42;
    int j;

    j = (i++ + 10);
    printf("%d\n", i);  // i: 43
    printf("%d\n", j);  // j: 52

    j = (++i + 10);
    printf("%d\n", i);  // i: 44
    printf("%d\n", j);  // j: 54

    // 关系运算符
    /**
     * > 大于运算符
     * < 小于运算符
     * >= 大于等于运算符
     * <= 小于等于运算符
     * == 相等运算符
     * != 不相等运算符
     */

    // 关系表达式通常返回0或1，表示真伪。C 语言中，0表示伪，所有非零值表示真。比如，20 > 12返回1，12 > 20返回0。
    // 关系表达式常用于if或while结构。
    if(12 > 3) {
        printf("bigger\n®");
    }
    // 另一个需要避免的错误是，多个关系运算符不宜连用。
    // i < j < k
    // 上面示例中，连续使用两个小于运算符。这是合法表达式，不会报错，但是通常达不到想要的结果，即不是保证变量j的值在i和k之间。因为表示运算符是从左到右计算，所以实际执行的是下面的表达式。
    // (i < j) < k
    // 上面式子中，i < j返回0或1，所以最终是0或1与变量k进行比较。如果想要判断变量j的值是否在i和k之间，应该使用下面的写法。
    // i < j && j < k

    // 逻辑运算符
    // 逻辑运算符提供逻辑判断功能，用于构建更复杂的表达式，主要有下面三个运算符。
    /**
     * !：否运算符（改变单个表达式的真伪）。
     * &&：与运算符（两侧的表达式都为真，则为真，否则为伪）。
     * ||：或运算符（两侧至少有一个表达式为真，则为真，否则为伪）。
     */

    // 对于逻辑运算符来说，任何非零值都表示真，零值表示伪。比如，5 || 0会返回1，5 && 0会返回0。
    // 逻辑运算符还有一个特点，它总是先对左侧的表达式求值，再对右边的表达式求值，这个顺序是保证的。如果左边的表达式满足逻辑运算符的条件，就不再对右边的表达式求值。这种情况称为“短路”。
    // if (number != 0 && 12/number == 2)
    // 如果 && 左侧的表达式（number != 0）为伪，即number等于0时，右侧的表达式（12/number == 2）是不会执行的。因为这时左侧表达式返回0，整个&&表达式肯定为伪，就直接返回0，不再执行右侧的表达式了。

    // 5 位运算符
    // C 语言提供一些位运算符，用来操作二进制位（bit）
    // （1）取反运算符～®
    // 取反运算符～是一个一元运算符，用来将每一个二进制位变成相反值，即0变成1，1变成0。
    printf("%d\n", ~11100); // 001100
    // (2)与运算符&
    // 与运算符&将两个值的每一个二进制位进行比较，返回一个新的值。当两个二进制位都为1，就返回1，否则返回0。
    // 10010011 & 00111101  => 返回 00010001

    // （3）或运算符|
    // 或运算符|将两个值的每一个二进制位进行比较，返回一个新的值。两个二进制位只要有一个为1（包含两个都为1的情况），就返回1，否则返回0。
    // 10010011 | 00111101 => // 返回 10111111

    // (4)异或运算符^
    // 异或运算符^将两个值的每一个二进制位进行比较，返回一个新的值。两个二进制位有且仅有一个为1，就返回1，否则返回0。
    // 10010011 ^ 00111101 => 返回 10101110

    // （5）左移运算符<<
    // 左移运算符<<将左侧运算数的每一位，向左移动指定的位数，尾部空出来的位置使用0填充。
    // 10001010 << 2 => 返回 1000101000

    // （6）右移运算符>>
    // 右移运算符>>将左侧运算数的每一位，向右移动指定的位数，尾部无法容纳的值将丢弃，头部空出来的位置使用0填充。
    // 10001010 >> 2 返回 00100010

    // 运算符优先级
    //运算符的优先级顺序很复杂。下面是部分运算符的优先级顺序（按照优先级从高到低排列）。
    /**
     * 圆括号（()）
     * 自增运算符（++），自减运算符（--）
     * 一元运算符（+和-）
     * 乘法（*），除法（/）
     * 加法（+），减法（-）
     * 关系运算符（<、>等）
     * 赋值运算符（=）
     */
    return 0;
}