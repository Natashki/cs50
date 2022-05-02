#include <stdio.h>

int sqr(int a){
    return a*a;
}

void test(void){
    printf("helo everyone!\n");
}

int main(void){
    test();
    printf("%d\n", sqr(5));
}