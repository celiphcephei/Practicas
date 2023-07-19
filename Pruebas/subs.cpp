#include <bits/stdc++.h>                         
using namespace std;
#define LSOne(S) ((S) & -(S))                    
int main() {
  int N = 2;                                     
  for (int i = 0; i < (1<<N); ++i) {
    int pos = i;
    while (pos) {
      int ls = LSOne(pos);
      printf("%d ", __builtin_ctz(ls)+1);        
      pos -= ls;
    }
    printf("\n");
  }
}