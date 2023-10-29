#include <iostream>
int main(){
    int min{0}, max{1};
    
    int Xn{0}, A{7}, B{5}, M{3};
    int result;
    for(int i = 0; i < 11; ++i){
        // std::cout << Xn << ' ';
        result = min + Xn % (max - min + 1);
        // int result = min + (Xn / M) * (max - min);
        std::cout << result << ' ';
        Xn = (A * Xn + B) % M;
    }
    std::cout << '\n';
    return 0;
}