#include <stdio.h>

int main() {
    int n,m,stroka,stolb,znach = 100000;
    printf("Введите количество строк и столбцов: ");
    scanf("%d %d", &n, &m);
    int matrix[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Введите %d %d элемент матрицы: ",i+1,j+1);
            scanf("%d", &matrix[i][j]);}}
    
    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j >= 0; j--) {
            if (matrix[i][j] < znach) {
                znach = matrix[i][j];
                stroka = i;stolb = j;}}}

    int kvadr,umn,sum=0;
    printf("Введите размер квадрата: ");
    scanf("%d", &kvadr);
    printf("Введите число для умножения: ");
    scanf("%d", &umn);
    
    if (stroka + kvadr <= n && stolb + 1 - kvadr >= 0) {
        int quad[kvadr][kvadr];

        for (int i = stroka,kx = 0; i < stroka+kvadr; i++) {
            for (int j = stolb,ky=kvadr-1; j > stolb-kvadr; j--) {
                quad[kx][ky] = matrix[i][j]*umn;
                sum+=quad[kx][ky];
                ky-=1;
            }kx+=1;
        }

        for (int i = 0; i < kvadr; i++) {
            for (int j = 0; j < kvadr; j++) {
                printf("%d ", quad[i][j]);}printf("\n")}
        printf("Сумма элементов квадрата: %d\n", sum);
    } else {
        printf("Невозможно сформировать квадрат из минимального элемента.\n");
    }
}
