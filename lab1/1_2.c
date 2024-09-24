#include <stdio.h>

int main(){
        float temp;
        char s;
        printf("Введите температуру:");
        scanf("%f %c", &temp, &s);
        if (s == 'C'  s == 'c'){
                printf("%.2f фаренгейт", (temp*1.8)+32);
        } else if (s == 'f'  s == 'F'){
                printf("%.2f цельсий", (temp - 32)/1.8);
        } else{
                printf("error");
        }
}
