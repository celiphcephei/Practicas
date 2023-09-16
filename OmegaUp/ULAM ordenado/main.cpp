#include <bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int n; scanf("%d", &n);
    vector<int> ans{};
    while(n > 1){
        ans.push_back(n);
        if(n % 2 == 0) n /= 2;
        else ++(n *= 3);
    }
    ans.push_back(n);
    sort(ALL(ans)); UNIQUE(ans);
    for(auto& i : ans){
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}