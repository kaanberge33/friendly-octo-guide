#include <stdio.h>

void tablo(int x) {
    if (x <= 10) {
        for (int i = 1; i <= 10; i++) {
            printf("%-3d", x * i);
        }
        printf("\n");
        tablo(x + 1);   
    }
}

int main(void) {
    tablo(1);
    return 0;
}
