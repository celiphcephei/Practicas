#include <iostream>
#include <string>
#include<cmath>

int multiplicacion(int, int);
int multiplicacion_karatsuba(int, int);

int main(){
    int x = 4488, y = 2244; scanf("%d %d", &x, &y);
    printf("%d\n", multiplicacion_karatsuba(x, y));
    return 0;
}

int multiplicacion(int a, int b){
    if(b == 0) return 0;
    return a + multiplicacion(a, b - 1);
}

int multiplicacion_karatsuba(int x, int y){
    int n = (int)std::to_string(x).length();
    int resultado;
    int pot = pow(10, n / 2);
    int a = x / pot;
    int b = x % pot;
    int c = y / pot;
    int d = y % pot;
    int ac = multiplicacion(a, c);
    int ad = multiplicacion(a, d);
    int bc = multiplicacion(b, c);
    int bd = multiplicacion(b, d);
    resultado = pow(10, n) * ac + pot * (ad + bc) + bd;
    return resultado;
}