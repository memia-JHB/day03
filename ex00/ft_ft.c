#include <stdio.h>

int main(){
    int x = 42;
    printf("x is %d\n", x);

    int *aptr = &x;

    printf("aptr is %d\n" , aptr);

    printf("x is %d\n", *aptr);

}
