#include <bits/stdc++.h>
using namespace std;
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int n, m, p, pasos = 0; scanf("%d %d %d", &n, &m, &p);
    vector<vector<char>> mapa(n, vector<char>(m));
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            scanf("%c", &mapa[i][j]);

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j){
            if(mapa[i][j] == '#') break;
            if(isalpha(mapa[i][j])){
                int y = j;
                ++j;
                while(mapa[i][y] != mapa[i][j]){
                    ++j;
                }
            }
            ++pasos;
        }
    return 0;
}