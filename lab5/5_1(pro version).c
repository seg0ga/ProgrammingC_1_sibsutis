//Вариант 6
#include <stdio.h>

int main(){
    unsigned int digit;
    char digit_str;
    int flag, count,step, local_count;
    printf("Введите целое цисло A: ");
    scanf("%d", &digit);
    local_count = 1;
    while (digit==digit){
        step = 256;
        if (digit >= (step*local_count)){
            local_count++;
        } else
        break;
    }
    if (digit>=0) {
        printf("Введите количество сдвигов: ");
        scanf("%d", &count);
        for (int i=0; i<count; i++){
            flag = 0;
            if (digit %2 ==1)
                flag = 1;
            digit = digit>>1;
            if (flag==1)
                if (local_count == 1)
                    digit= digit+(128);
                else
                    digit= digit+(128*(256*(local_count-1)));
            printf("%d \n", digit);}
    }else
        printf("Неправильное число");
    }
