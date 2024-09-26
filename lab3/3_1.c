#include <stdio.h>

int main(){
        int a,k,m;
        printf("Введите число N: ");
        scanf("%d",&a);
        k = 1;
        for (int i = 0; i<a;i++){
                m=0;
                while (m < a){
                    if (a>3 && k<10)
                        printf(" ");
                    if (a>9 && k<100)
                        printf(" ");
                    printf("%d ",k);k++;m++;
                }
                printf("\n");
        }
}
