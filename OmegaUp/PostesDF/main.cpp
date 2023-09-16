#include <bits/stdc++.h>
#define ALL(x) x.begin(), x.end()
using namespace std;
int main(){
    int k, c, t, min = 1000001; scanf("%d\n%d", &k, &c);
    char dummy;
    vector<int> postes;
    while(scanf("%d%c", &t, &dummy) != EOF){
        postes.push_back(t);
        if (dummy == '\n') break;
    }
    sort(ALL(postes));
    
    for (int i = 0; i <= c - k; ++i) {
        int difActual = postes[i + k - 1] - postes[i];
        if (difActual < min) min = difActual;
    }
    printf("%d\n", min);
    return 0;
}