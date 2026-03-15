//Вариант4
#include <stdio.h>

int main(){
    int a,b,count=0,glob_count=0,count2=0;
    scanf("%d %d",&a,&b);
    for (int i=a;i<=b;i++){
        count=0;
        for (int j=1;j<=i;j++){
            if (i%j==0){
                count++;}}
        if (count > 2){
            count2=0;
            for (int k=1;k<=count;k++){
                if (count%k==0){
                    count2++;}}
            if (count2==2){
                glob_count++;}}}
    printf("%d",glob_count);}
