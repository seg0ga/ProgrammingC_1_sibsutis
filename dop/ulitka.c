#include <stdio.h>

int main() {
    int n;
    printf("Введите размер матрицы n: ");
    scanf("%d", &n);

    int matrix[n][n],value = 1,nacSt = 0, conSt = n - 1,nacSb = 0, conSb = n - 1;

    while (nacSt <= conSt && nacSb <= conSb) {
        for (int i = nacSb; i <= conSb; i++) {
            matrix[nacSt][i] = value++;}nacSt++;

        for (int i = nacSt; i <= conSt; i++) {
            matrix[i][conSb] = value++;}conSb--;

        if (nacSt <= conSt) {
            for (int i = conSb; i >= nacSb; i--) {
                matrix[conSt][i] = value++;}conSt--;}

        if (nacSb <= conSb) {
            for (int i = conSt; i >= nacSt; i--) {
                matrix[i][nacSb] = value++;}nacSb++;}}

    // Вывод матрицы
    printf("Матрица, заполненная гусеницей:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);}printf("\n");}
}
