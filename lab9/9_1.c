#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Заполнение матрицы с клавиантуры
void sozd_matrix(int stroka, int stolb, int matrix[stroka][stolb]) {
    for (int i = 0; i < stroka; i++) {
        for (int j = 0; j < stolb; j++) {
            printf("Введите %d %d элемент матрицы: ",i+1,j+1);
            scanf("%d", &matrix[i][j]);}}}

//Заполнение матрицы рандомно
void sozd_matrix_rand(int stroka, int stolb, int matrix[stroka][stolb]) {
    for (int i = 0; i < stroka; i++) {
        for (int j = 0; j < stolb; j++) {
            int value = rand() % (100 + 1);
            matrix[i][j] = value;}}}
            
//Поиск строки с мин. элементом
int min_stroka(int stroka, int stolb, int matrix[stroka][stolb]){
    int znach = 9999999,strokar;
    for (int i = 0; i < stroka; i++) {
        for (int j = stolb - 1; j >= 0; j--) {
            if (matrix[i][j] < znach) {
                znach = matrix[i][j];
                strokar = i;}}}
    return strokar;}
    
//Поиск столбца с мин. элементом
int min_stolb(int stroka, int stolb, int matrix[stroka][stolb]){
    int znach = 9999999,stolbr;
    for (int i = 0; i < stroka; i++) {
        for (int j = stolb - 1; j >= 0; j--) {
            if (matrix[i][j] < znach) {
                znach = matrix[i][j];
                stolbr = j;}}}
    return stolbr;}
    
//Вывод матрицы
void vivod_matrix(int n,int m,int matrix[n][n]){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);}printf("\n");}}


int main() {
    srand(time(NULL));
    int n,m,stroka,stolb,var;
    printf("Введите количество строк и столбцов: ");
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    printf("Введите вариант заполнения(1-рандом/2-пользователь): ");
    scanf("%d", &var);
    if (var == 2){sozd_matrix(n,m,matrix);
        vivod_matrix(n,m,matrix);
    }
    else if (var == 1){sozd_matrix_rand(n,m,matrix);
        vivod_matrix(n,m,matrix);
    } else{
        printf("Неправильный номер варинта");
        return 0;}
    stroka = min_stroka(n,m,matrix);
    stolb = min_stolb(n,m,matrix);
    
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
                ky-=1;}kx+=1;}
        vivod_matrix(kvadr,kvadr,quad);
        printf("Сумма элементов квадрата: %d\n", sum);
    } else {
        printf("Квадрат не влазит :(\n");}
}
