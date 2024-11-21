#include <stdio.h>
#include <math.h>

struct triangle{int a,b,c;float plos;};
int max_plos(struct triangle Triangles[], int n);
void print_triangle(struct triangle Triangles[], int n);
float plos(float a,float b,float c);
