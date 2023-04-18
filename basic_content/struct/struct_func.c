#include <stdio.h>

typedef struct Base
{ // public
    int v1;
    //    public:      //error
    int v2;
    // private:
    int v3;
    // void print(){       // c中不能在结构体中嵌入函数
    //     printf("%s\n","hello world");
    // };    //error!
};

void Base()
{
    printf("%s\n", "I am Base func");
}
// struct Base base1;  //ok
// Base base2; //error

typedef  struct LinkQueueStack{
 struct  LinkQueueStack *next;
}LkQueStack;

int main()
{
    struct Base base;
    base.v1 = 1;
    // base.print();
    printf("%d\n", base.v1);
    Base();
    return 0;
}
