#include <stdio.h>
int main(){
    //! showMemory(start=65520)
    int a = 42;
    double d = 58.394;
    char c = 'r';
    int * addressOfA = &a;
    printf("address of a: %p\n", addressOfA);
    double * addressOfA2 = &a;
    printf("address2 of a: %p\n", addressOfA2);
    int * addressOfA3 = addressOfA2;
    printf("address3 of a: %p\n", addressOfA3);    
    
    printf("pointed value of addressOfA: %i\n", *addressOfA);
    printf("pointed value of addressOfA2: %d\n", *addressOfA2);
    printf("pointed value of addressOfA3: %i\n", *addressOfA3);
    
    return 0;
}