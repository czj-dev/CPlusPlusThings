#include "iostream"
#include "cstdlib"

//
// Created by 86552 on 2023/5/12.
//
int main() {
    // 指针存放某个对象的地址，如果想要得到地址，需要使用取地址符 &
    // 如果指针指向了一个对象地址，如果访问该对象，则使用解引用符 *
    int ival = 42;
    int *p = &ival;// p 存放变量 ival 的地址，或者说 p 是指向变量 ival 的指针
    std::cout << *p << std::endl;

    // 指针的值应该属于下列4中状态之一
    // 指向一个紧邻对象所占空间的下一个位置
    // 空指针，意味着指针没有指向任何对象
    // 无效指针，也就是上述情况之外的其他值
    int i = 42;
    int &r = i; // r 是一个引用 &r 则是 变量 i 的地址
    std::cout << r << std::endl;
    std::cout << &r << std::endl;
    int *j;
    j = &r;
    std::cout << *j << std::endl;
    int g = 43;
    *j = g;
    std::cout << *j << std::endl;

    // 空指针的默认值其实就是 0 ，在过去，我们也可以使用 cstdlib 中的 NULL ，现在则更推荐使用 C++ 11 标准中的 nullptr
    int *n1 = nullptr;
    int *n2 = NULL;
    int *n3 = 0;

    // void* 指针，void* 指针不包含具体的类型，所以它可以存放任意对象的地址。但也由于这样我们不知道它的具体类型，也就无法操作它，只能用它作为函数的
    // 输入输出、指针比较以及赋值给另一个 void* 指针
    double obj = 3.14;
    *pd = &obj;
    void *pv = &obj;
    pv = pd;
}
