#include <stdio.h>
#include <math.h>

struct triangle{
    int a,b,c;float plos;};

int max_plos(struct triangle Triangles[], int n){
    int index=0;
    float max_pl=Triangles[0].plos;
    for (int i = 0; i < n; i++) {
        if (max_pl<Triangles[i].plos){
            index = i;
            max_pl = Triangles[i].plos;
        }
    }return index;
}

void print_triangle(struct triangle Triangles[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Треугольник %d, со сторонами(%d,%d,%d) имеет площадь: %.2f\n",(i+1), Triangles[i].a, Triangles[i].b, Triangles[i].c,Triangles[i].plos);
    }
}
float plos(float a,float b,float c){
    float p = (a+b+c)/2;
    float s = sqrt((p*(p-a)*(p-b)*(p-c)));
    return s;
}

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
            break;}
    print_triangle(Triangles,3);
    int index = max_plos(Triangles,3);
    printf("Наибольшую площадь имеет %d треугольник (%.2f)\n",(index+1),Triangles[index].plos);

}}
