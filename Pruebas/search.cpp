#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5, l[] = {1, 3, 5, 7, 3}, v = 7;
    sort(l, l+n);
    printf("%d\n", binary_search(l, l + n, v));
    return 0;
}