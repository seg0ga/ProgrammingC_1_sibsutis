#include <stdio.h>

int main(){
        int a;
        printf("введите год:");
        scanf("%d",&a);
        if (a%400 == 0){
                printf("Весокосный");
        } else if (a%100 == 0){
                printf("Не весокосный");
        } else if (a%4 == 0){
                printf("Весокосный");
        } else{
                printf("Не весокосный");
        }
}
