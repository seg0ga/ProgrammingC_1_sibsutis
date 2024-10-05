//Вариант 6
#include <stdio.h>

int main(){
    unsigned int digit, count;
    char digit_str;
    int flag;
    printf("Введите 8 битное целое цисло A: ");
    scanf("%d", &digit);
    if (digit<=255 && digit>=0) {
        printf("Введите количество сдвигов: ");
        scanf("%d", &count);
        for (int i=0; i<count; i++){
            flag = 0;
            if (digit %2 ==1)
                flag = 1;
            digit = digit>>1;
            if (flag==1)
                digit= digit+128;
            printf("%d \n", digit);}
    }else
        printf("Неправильное число");
    }
