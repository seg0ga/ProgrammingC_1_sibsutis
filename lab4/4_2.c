//Вариант 7
#include <stdio.h>

int main(){
        int stars,st_stars,probel=0,local_probel;
        printf("Введите число: ");
        scanf("%d",&stars);
        for (stars; stars>0;stars--){
                st_stars=0;
                local_probel = probel;
                while (local_probel!=0){
                    local_probel--;
                    printf(" ");
                }
                while (st_stars < stars){
                    printf("*");st_stars++;
                }
                printf("\n");
                probel++;
        }
}
