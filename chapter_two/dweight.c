/* Computes the dimensional weight of a 12 11 x 10 11 x a II box  */

#include <stdio.h>

    int main(void){
    int height, length, width, volume, weight;

    float some_float;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;
    some_float = 3.24356789;

    printf("Dimensions: %dx%dx%d\n", length , width, height);
    printf("Volume (cubic inches) : %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    printf("Some float : %0.2f\n", some_float);

    return 0;

}