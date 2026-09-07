 #include <stdio.h>
 int main() {
 
 float voltage;
    float safeLimit = 12.0;

    printf("2. Enter measured voltage: ");
    scanf("%f", &voltage);

    if (voltage > safeLimit) {
        printf("Voltage is ABOVE the safe limit.\n\n");
    } else {
        printf("Voltage is within the safe limit.\n\n");
    }
    
    return 0;
}