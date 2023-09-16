#include <iostream>

void torresDeHanoi(int n, char origen, char destino, char auxiliar) {
    if (n == 1) {
        std::cout << "Mover disco 1 de " << origen << " a " << destino << std::endl;
        return;
    }
    
    torresDeHanoi(n - 1, origen, auxiliar, destino);
    std::cout << "Mover disco " << n << " de " << origen << " a " << destino << std::endl;
    torresDeHanoi(n - 1, auxiliar, destino, origen);
}

int main() {
    int numDiscos;
    std::cout << "Ingrese el número de discos: ";
    std::cin >> numDiscos;

    torresDeHanoi(numDiscos, 'A', 'C', 'B');
    return 0;
}
