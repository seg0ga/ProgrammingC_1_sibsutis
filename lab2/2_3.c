//Вариант 8
#include <stdio.h>

int main(){
        int n;
        printf("Введите число: ");
        scanf("%d",&n);
        for (int s=1, i=1; i<=n; i++) {
                s = s * i;
                printf("%d \n",s);
        }


}
