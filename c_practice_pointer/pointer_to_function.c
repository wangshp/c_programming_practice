#include <stdio.h>

void func1()
{
    printf("heihei\n");
}

// pass function as reference
void func2(void (*func)(void))
{
    (*func)();
}
int main()
{
    //void (*ptr_func1)(void);
    //ptr_func1 = &func1;
    //(*ptr_func1)();

    func2(&func1);

    return 1;
}

// void *func(void);

// Problem: build a class with internal methods by using structure and void * 