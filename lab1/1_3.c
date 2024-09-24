//Решение для второго случая

#include <stdio.h>
#include <math.h>

int main() {
        float x,y, line;
        printf("Введите значение X и Y\n");
        scanf("%f %f", &x, &y);
        line = sqrt(pow(x,2) + pow(y,2));
        if (x < 0 || y < 0) {
                printf("Не принадлежит\n");
        } else if (line <= 1 && line >=0.5){
                printf("Принадлежит\n");
        } else {
                printf("Не принадлежит\n");
        }

}
