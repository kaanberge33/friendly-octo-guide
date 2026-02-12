#include <stdio.h>
int main(){
int number;
printf("enter a number\n");
scanf("%d", &number);
int asalmi = 1;
    if(number <= 1){
        asalmi = 0;
    }else{
        for(int i = 2; i < number; i++)
        if(number % i==0){
        asalmi = 0;    


        }
    }
    if(asalmi
    ){
        printf("%d asal sayidir\n");
    }else{
        printf("%d değildir");
    }     




    return 0;
}
