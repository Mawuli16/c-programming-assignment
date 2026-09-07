#include <stdio.h>
int main() {

    float v, I, power;

    printf("3. Enter voltage: ");
    scanf("%f", &v);

    printf("Enter current: ");
    scanf("%f", &I);

    power = v * I;

    printf("Electrical Power = %.2f watts\n\n", power);
    
    return 0;
}