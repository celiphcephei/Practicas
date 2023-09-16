#include <bits/stdc++.h>
using namespace std;
int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int m, n;
    scanf("%d %d", &m, &n);
    vector<vector<int>> vecindario(m, vector<int>(n));
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            scanf("%d", &vecindario[i][j]);
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            bool limit = true;
            for(int x = i - 1; x <= i + 1; ++x) {
                for(int y = j - 1; y <= j + 1; ++y) {
                    if(x >= 0 && x < m && y >= 0 && y < n && (x != i || y != j)) {
                        if(vecindario[i][j] <= vecindario[x][y]) {
                            limit = false;
                            break;
                        }
                    }
                }
                if(!limit) break;
            }
            if(limit) printf("%d %d\n", i + 1, j + 1);
        }
    }
    return 0;
}