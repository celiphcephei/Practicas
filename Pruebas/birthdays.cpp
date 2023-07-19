#include <bits/stdc++.h>
using namespace std;
typedef tuple<int, int, int> iii;
int main(){
    multiset<iii> birthdays;
    birthdays.emplace(1,30,-1989);
    birthdays.emplace(3,21,-1986);
    birthdays.emplace(4,15,-1983);
    birthdays.emplace(2,1,-1986);
    birthdays.emplace(4,21,-1982);
    for(auto &[mm, dd, yyyy] : birthdays)
        printf("%d %d %d\n", dd, mm, -yyyy);
    return 0;
}