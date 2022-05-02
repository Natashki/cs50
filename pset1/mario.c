#include <cs50.h>
#include <stdio.h>

void main(void){

    int h = get_int("height: ");

    while(h <= 0 || h >=9 ){
        h = get_int("retry: ");
    }


    for(int i = 0; i<h; i++){
        for(int space = 0; space<h-i-1; space++){
            printf(" ");
        }
        for(int t = 0; t<i+1; t++){
        printf("#");
        }
        printf("\n");

        }
}
