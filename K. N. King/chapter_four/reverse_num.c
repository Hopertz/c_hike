// Write a program that asks the user to enter a three - digit number,
// then prints the number with its digits reversed.

#include <stdio.h>

int main(void)

{
    int num, dig1, dig2, dig3;
    printf("Enter three digit number : ");
    scanf("%d", &num);
    dig3 = num / 100;
    dig2 = (num % 100) / 10;
    dig1 = (num % 100) % 10;
    printf("Reverse number is %1d%1d%1d\n", dig1, dig2,dig3);
    return 0;
}