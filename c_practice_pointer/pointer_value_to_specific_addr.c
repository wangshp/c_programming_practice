#include <stdio.h>

int main()
{
    int a;
    int* addr_a = &a;
    printf("address 1 of a: %p\n", &a);
    printf("address 2 of a: %p\n", addr_a);

    
    int* addr_target = (int*)0x7ffda59629b4;
    *addr_target = 10;
    printf("addr_target: %p", addr_target);
    printf("value in addr_target: %d", *addr_target);
    
    return 1;
}