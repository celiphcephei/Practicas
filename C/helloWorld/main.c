#include <stdio.h>

int main(){
    float c, f;
    printf("F      C\n");
    for(int i = 0; i < 10; i++){
        c = (5.0/9.0)*(f-32.0);
        printf("%3.0f %6.1f\n", f, c);
        f += 20;
    }
    return 0;
}