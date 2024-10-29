#include <stdio.h>

int main(){
    int n;
    printf("Введите размер матрицы(2-3): ");
    scanf("%d", &n);
    if (n == 3){
        int array[3][3];
        float x,y,z,delt,z1,z2,z3;
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                printf("Введите a[%d][%d]",i,j);
                scanf("%d",&array[i][j]);}}
        printf("Введите значение 1 уравнения: ");
        scanf("%f",&z1);
        printf("Введите значение 2 уравнения: ");
        scanf("%f",&z2);
        printf("Введите значение 3 уравнения: ");
        scanf("%f",&z3);
        delt = (array[0][0]*array[1][1]*array[2][2])+(array[0][1]*array[1][2]*array[2][0])+(array[1][0]*array[2][1]*array[0][2])-(array[2][0]*array[1][1]*array[0][2])-(array[1][0]*array[0][1]*array[2][2])-(array[2][1]*array[1][2]*array[0][0]);
        if (delt == 0) printf("Нет единственного решения.");
        else {x = (z1*array[1][1]*array[2][2])+(array[0][1]*array[1][2]*z3)+(z2*array[2][1]*array[0][2])-(z3*array[1][1]*array[0][2])-(z2*array[0][1]*array[2][2])-(array[2][1]*array[1][2]*z1);
        y = (array[0][0]*z2*array[2][2])+(z1*array[1][2]*array[2][0])+(array[1][0]*z3*array[0][2])-(array[2][0]*z2*array[0][2])-(array[1][0]*z1*array[2][2])-(z3*array[1][2]*array[0][0]);
        z = (array[0][0]*array[1][1]*z3)+(array[0][1]*z2*array[2][0])+(array[1][0]*array[2][1]*z1)-(array[2][0]*array[1][1]*z1)-(array[1][0]*array[0][1]*z3)-(array[2][1]*z2*array[0][0]);
        printf("x = %.1f\n",x/delt);
        printf("y = %.1f\n",y/delt);
        printf("z = %.1f\n",z/delt);}
    }
    else if (n == 2){
        int array[2][2];
        float x,y,delt,z1,z2;
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                printf("Введите a[%d][%d]",i,j);
                scanf("%d",&array[i][j]);}} 
        printf("Введите значение 1 уравнения: ");
        scanf("%f",&z1);
        printf("Введите значение 2 уравнения: ");
        scanf("%f",&z2);
        x = (z1*array[1][1])-(z2*array[0][1]);
        y = (z2*array[0][0])-(z1*array[1][0]);
        delt = (array[0][0]*array[1][1])-(array[0][1]*array[1][0]);
        if (delt == 0) printf("Нет единственного решения.");
        else {printf("x = %.1f\n",x/delt);
        printf("y = %.1f",y/delt);}
    }else printf("Неверный размер матрицы");
}
