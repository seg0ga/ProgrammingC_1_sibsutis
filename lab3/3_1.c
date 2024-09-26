#include <stdio.h>

int main(){
        int a,k,m;
        printf("Введите число N: ");
        scanf("%d",&a);
        k = 1;
        for (int i = 0; i<a;i++){
                m=0;
                while (m < a){
                        printf("%d ",k);
                        k++;
                        m++;
                }
                printf("\n");
        }
}
