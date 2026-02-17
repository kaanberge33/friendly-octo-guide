#include <stdio.h>

void kaanlocal(void);
void kaanstaticlocal(void);
void kaanglobal(void);

int x = 1; 

int main(void) {
    int x = 5; 

    printf("outer scope local x in main is %d\n", x);

    {
        int x = 7; 
        printf("inner scope local x in main is %d\n", x);
    }

    printf("outer scope local x in main is %d\n", x);

    kaanlocal();
    kaanstaticlocal();
    kaanglobal();
    kaanlocal();
    kaanstaticlocal();
    kaanglobal();

    printf("local x in main is %d\n", x);
    return 0;
}

void kaanlocal(void) {
    int x = 25; 
    printf("local x in kaanlocal is %d after entering\n", x);
    x++;
    printf("local x in kaanlocal is %d before exiting\n", x);
}
void kaanstaticlocal(void) {
    static int x = 50; 
    printf("static local x in kaanstaticlocal is %d on entering\n", x);
    x++;
    printf("static local x in kaanstaticlocal is %d on exiting\n", x);
}

void kaanglobal(void) {
    printf("global x is %d on entering kaanglobal\n", x);
    x *= 10;
    printf("global x is %d on exiting kaanglobal\n", x);
}








