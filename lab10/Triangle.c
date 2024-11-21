#include "dop.h"

int main(){
    struct triangle Triangles[3];
    for (int i = 0;i<3;i++){
        int a,b,c;
        float pl;
        printf("Введите стороны %d треугольника: ",(i+1));
        scanf("%d %d %d",&a,&b,&c);
        if ((a+b>c) && (b+c>a) && (a+c>b)){
            Triangles[i].a=a;
            Triangles[i].b=b;
            Triangles[i].c=c;
            pl = plos(a,b,c);
            Triangles[i].plos=pl;}
        else{
            printf("Неверный треугольник!\n");
            break;}}
    print_triangle(Triangles,3);
    int index = max_plos(Triangles,3);
    printf("Наибольшую площадь имеет %d треугольник (%.2f)\n",(index+1),Triangles[index].plos);

}
