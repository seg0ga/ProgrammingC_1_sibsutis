//Вариант 7
#include <stdio.h>

int main(){
    int digit, digit_bit =0, count=0;
    printf("Введите целое цисло A: ");
    scanf("%d", &digit);
    while (digit_bit != 1){
       count++;
       digit_bit = digit%2;
       digit=digit/2;
    } printf("Номер первого справа единичного бита: %d",count);
    
}
