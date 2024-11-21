#include "dop.h"


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
