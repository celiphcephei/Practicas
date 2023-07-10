#include <bits/stdc++.h>
#define ALL(x) x.begin() , x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - c.begin())

using namespace std;

int main(){
    vector<int> v = {9, 7, 9, 0, 1, 1, 4, 5, 2, 2, 6, 3, 8, 7};
    sort(ALL(v)); UNIQUE(v);
    for(auto &x : v) printf("%d\n", x);
    return 0;
}