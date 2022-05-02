#include <cs50.h>
#include <stdio.h>

void main(void)
{
int min = get_int("waterminutes: ");
int b = min * 12;
printf("bottles: %d\n" , b);
}
