#include <bits/stdc++.h>
using namespace std;
#define LSOne(S) ((S) & -(S))
int main(){
    int n = 5;
    for(int i = 0; i < (1<<n); i++){
        int pos = i;
        while(pos){
            int ls = LSOne(pos);
            printf("%d ", __builtin_ctz(ls)+1);
            pos -= ls;
        }
        printf("\n");
    }
    return 0;
}