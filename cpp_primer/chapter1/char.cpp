#include "iostream"

int main() {
    // char 分为带符号的和无符号以及无修饰符的类型
    // singed char 可以表示负数0到正整数 -128 -- 127 范围内的数值
    // 而 unsigned char 表示 0 -- 255 范围内的数值
    // char 无修饰符的表现主要取决于编译器
    // 当我们给一个无符号的类型赋值超出它的范围的值时，结果是初始值对无符号总数取模后的余数
    // 当我们给一个有符号的类型赋值超出它的的范围的值时，结果是 undefined 程序可能报错或无法编译
    unsigned char u1 = 42, u2 = 10;
    std::cout << u1 - u2 << std::endl;
    std::cout << u2 - u1 << std::endl;
    signed char x = 256;
    std::cout << x << std::endl;
    std::string book("this is a English book");
    std::cout << book << std::endl;
    std::cout << "Who goes with F \145rgus?\012";

    // 变量初始化
    // 以下 4 种方式都可以用来初始化 C++ 的对象或者为某些对象赋新值
    // ｛｝ 做为 C++ 11 新标准的一部分，在此之前它只能在部分场景才可以使用，但是现在可以与其他形式一种不受限制
    // 使用 {} 有個好处就是，在对内置数值赋值时，编译器会检测其有没有丢失数值的风险，从而报错
    int units_sold = 0;
    int units_sold1 = {0};
    int units_sold2{0};
    int units_sold3(9);
    // 定义于函数体内的内置类型的对象如果没有初始化，则其值未定义。类的对象如果没有显示地初始化，则其值由类确定。

    // extern 关键字可以让我们只声明而不定义变量，如果要在多个文件中使用同一个变量，就必须将声明和定义分离。此时，变量的定义可以出现且只能出现在
    // 一个文件中，而其他用到该变量的文件必须对其进行生命，却绝对不能重复定义
    extern int i; // 声明而非定义 i
    int j; // 声明并且定义 i
    //    extern int f = 9;  声明并且定义 f ，如果在函数体内这样做会报错

    // c++ 别名使用 & 关键字修饰
    int refVal = 198;
    int &newRefVal = refVal;
    refVal = 98;
    std::cout << "reference :" << newRefVal << std::endl;

    // C++ 并没有限制修饰符的个数书写限制，修饰符数量的不同也会对变量的含义产生影响
    int ival = 1024;
    int *pi = &ival; // pi 指向一个 int 型的数
    int **ppi = &pi; // ppi 指向一个 int 型的指针
    std::cout << "The value of ival\n"
              << "direct value:" << ival << "\n"
              << "indirect value:" << *pi << "\n"
              << "doubly indirect value:" << **ppi << std::endl;
}