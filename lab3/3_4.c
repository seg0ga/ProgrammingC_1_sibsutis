//Вариант 10
#include <stdio.h>

int main(){
        int a;
        printf("Введите число: ");
        scanf("%d", &a);
        for (int k,n=a, s=0; n!=0; n=n/10){
                k=n%10;
                if (k>s){
                        s=k;
                        printf("%d %d %d",n,k,s);
                }
        }
}
