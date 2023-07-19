#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "ABCDEF";
    do{
        for(int i = 0; i < (int)s.length(); i++) printf("%c", s[i]);
        printf("\n");
    } while(next_permutation(s.begin(), s.end()));
    return 0;
}