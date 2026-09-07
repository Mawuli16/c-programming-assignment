#include <stdio.h>
int main() {
    float sensor, sum = 0, average;
    int i;

    printf("6. Enter five sensor values:\n");

    for (i = 1; i <= 5; i++) {
        printf("Sensor %d: ", i);
        scanf("%f", &sensor);

        sum = sum + sensor;
    }

    average = sum / 5;

    printf("Average sensor value = %.2f\n", average);

    return 0;
    
}