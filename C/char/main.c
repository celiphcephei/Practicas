#include <stdio.h>
/*
    Se ejecuta hasta apretar Control D o control Z en windows
*/
int main(){
    printf("Primera opcion\n");
    int c;
    c = getchar();
    while(c != EOF){
        putchar(c);
        c = getchar();
    }
    printf("\nSegunda opcion\n");

    while((c = getchar()) != EOF){
        putchar(c);
    }
    return 0;
}