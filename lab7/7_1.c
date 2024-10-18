//Вариант 14 (На оценку "5")
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char predlog[100];
    int sum = 0;
    printf("Введите предложение: ");
    fgets(predlog, 100, stdin);
    for (int i = 1; i < 100; i++) {
        if (isdigit(predlog[i]))
            sum += predlog[i] - '0';
    }
    if (sum > 0) {
        printf("Сумма: %d\n", sum);
    } else {
        printf("Цифр нет\n");
    }

    return 0;
}
