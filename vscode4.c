#include <stdio.h>
int main() {
    float battery;

printf("4. Enter battery percentage: ");
    scanf("%f", &battery);

    if (battery < 20) {
        printf("Battery Status: LOW\n\n");
    }
    else if (battery < 80) {
        printf("Battery Status: NORMAL\n\n");
    }
    else {
        printf("Battery Status: FULL\n\n");
    }
    
    return 0;
}