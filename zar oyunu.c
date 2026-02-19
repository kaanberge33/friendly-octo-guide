#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gamedice(){
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}


int main(){
    srand(time(NULL));
int sum = gamedice();

printf("firs shot :%d\n", sum);

if (sum == 7 || sum == 11){
    printf("you won\n");
    return 0;
}else if (sum == 2 || sum == 3 || sum == 12){
    printf("you lost\n");
    return 0;
}

int point = sum; 
    printf("your point: %d\n", point);

while (1){

    sum = gamedice();
    printf("shot: %d\n", sum);


     if (sum == point) {
            printf("you won!\n");
            break;
        } else if (sum == 7) {
            printf("you lost!\n");
            break;
        }
    }

    return 0;
}    
