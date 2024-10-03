//Вариант 7 (extended)
#include <stdio.h>

int main(){
        int count_local, count_local_2,count,base=65,next,probel=0,local_probel;
        printf("Введите число: ");
        scanf("%d",&count);
        count_local = 0;
        for (int i = 0; count>i;i++){
                next = base;
                count_local_2 = count_local;
                local_probel = probel;
                while (local_probel!=0){
                        local_probel--;
                        printf(" ");
                }
                probel++;
                while (count_local_2 < count){
                        printf("%c", next);count_local_2++;
                        next++;
                }
                count_local++;
                base++;
                printf("\n");
        }
}
