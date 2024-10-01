//Вариант 6
#include <stdio.h>

int main(){
    int digit, count;
    char digit_str;
    printf("Введите целое цисло A: ");
    scanf("%d", &digit);
    printf("Введите количество сдвигов: ");
    scanf("%d", &count);
    printf("%d \n", digit);
    for (int i=0; i<count; i++){
        digit = digit>>1;
        printf("%d \n", digit);
    }
}
