#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float number;  
    float vize;
    float final;
    float ortalama;

    printf("Enter passing grade: ");
    scanf("%f", &number);

    printf("Enter midterm grade: ");
    scanf("%f", &vize);

    printf("Enter final grade: ");
    scanf("%f", &final);

    ortalama = vize * 0.4 + final * 0.6;

    if (ortalama >= number) {
        printf("Dersi geçtin\n");
    } else {
        printf("Dersi geçemediniz\n");
    }

    return 0;
}
