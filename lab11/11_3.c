#include <stdio.h>  
  
#define POW(x)(x)*(x)  
int main() {      
    int y = 5;      
    int z = POW(y + 1);      
    printf("z = %d\n", z);      
    return 0;} 
