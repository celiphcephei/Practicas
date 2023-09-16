#include <iostream>
#include <list>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    list<int> plants;
    list<int>::iterator I;
    
    for (int i = 0; i < N; i++) {
        int planta;
        cin >> planta;
        I = plants.begin();
        
        while (I != plants.end()) {
            if (*I >= planta) {
                I = plants.erase(I);
            }
            else {
                ++I;
            }
        }
        plants.push_back(planta);
    }
    
    cout << plants.size() << endl;
    
    return 0;
}
