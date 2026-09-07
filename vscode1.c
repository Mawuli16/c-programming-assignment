#include <stdio.h>

int main() {

    // 1. Convert Celsius to Fahrenheit
    float celsius, fahrenheit;

    printf("1. Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f F\n\n", fahrenheit);
    
    return 0;
}

 