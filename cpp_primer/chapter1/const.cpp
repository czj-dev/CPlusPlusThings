#include "const.h"
#include "iostream"


int consts() {
    //编译器会在编译过程中把所有用到该 const 变量的地方替换成具体的数值。为了实现这一机制， 默认情况下 const 被设定仅在文件中有效。
    // 当多个文件中出现了同名的变量时，其实等同于不同文件中分别定义了独立的变量
    const int constA = 512;
    // 如果我们用的 const 变量初始化并不是一个常量值，又想在文件之间共享。
    // 我们就需要再用到 extern 修饰
    return constA;
};

extern const int bufSize = consts();