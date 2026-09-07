#include <stdio.h>
int main() {

float R1, R2, R3, largest;

    printf("5. Enter three resistance values: ");
    scanf("%f %f %f", &R1, &R2, &R3);

    largest = R1;

    if (R2 > largest) {
        largest = R2;
    }

    if (R3 > largest) {
        largest = R3;
    }

    printf("Largest resistance = %.2f ohms\n\n", largest);
    
    return 0;
}
