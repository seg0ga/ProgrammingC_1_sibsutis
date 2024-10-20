//Вариант 14 (На оценку "5")
#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int main() {
    char predlog[100];
    int sum = 0;
    
    //Запрашиваем и считываем предложение
    printf("Введите предложение: ");
    fgets(predlog, 100, stdin);

    //Идем по строке и смотрим на каждый символ на предмет того, что это число
    for (int i = 1; i < 100; i++) {
        if (isdigit(predlog[i]))
            sum += predlog[i] - '0';}
    
    //смотрим есть ли числа и если есть то выводим их сумму
    if (sum > 0)
        printf("Сумма: %d\n", sum);
    else
        printf("Цифр нет\n");
}
