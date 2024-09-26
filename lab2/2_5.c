//Вариант 11
#include <stdio.h>

int main(){
        int k,a;
        printf("Введите число: ");
        scanf("%d", &a);
        for (int n=a, s=0; n!=0; n=n/10){
                k=n%10;
                s=s*10+k;
                printf("%d,%d",k,s);
        }

}
