#include <stdio.h>

int main() {
    int num;

    // Input the number
    scanf("%d", &num);

    // Check if the least significant bit is set
    if (num & 1) {
        printf( "Set");
    } else {
        printf("Not Set");
    }

    return 0;
}