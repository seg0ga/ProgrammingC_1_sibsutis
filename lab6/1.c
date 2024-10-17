#include <stdio.h>
#define N 5

int main(){
    int chislo, max_a=-100000,min_b=0;
    float sr_znach;
    int a[N],b[N],c[N];
    printf("Введите реальные части: ");
    for (int i=1;i<N+1;i++){
        scanf("%d", &chislo);
        a[i] = chislo;
        if (chislo > max_a)
            max_a = chislo;
    }
    printf("Введите мнимые части: ");
    for (int i=1;i<N+1;i++){
        scanf("%d", &chislo);
        b[i] = chislo;
        if (chislo < 0)
            min_b++;
    }
    for (int i=1;i<N+1;i++){
        c[i] = a[i]+b[i];
    }
    for (int i=1;i<N+1;i++){
        sr_znach=sr_znach+c[i];
    }
    printf("Максимальная реальная часть: %d\n",max_a);
    printf("Количество мнимых частей <0: %d\n",min_b);
    printf("Среднее арифметическое C: %.4f\n",sr_znach/N);
}
