//Вариант 7
#include <stdio.h>
int main(){

        int n=2, flag = 0, a;
        printf("Введите число: ");
        scanf("%d",&a);
        while(a%n!=0){
                n++;
                if (n==a) {
                        flag = 1;
                        printf("Число простое \n");
                        break;          }
        }
}
