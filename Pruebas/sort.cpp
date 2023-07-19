#include <bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - c.begin())

int main(){
    vector<int> v = {1,23,4,2,5,1,4,5};
    sort(ALL(v)); UNIQUE(v);
    for(auto &x : v)
        printf("%d\n", x);
    return 0;
}