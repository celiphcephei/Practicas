#include <bits/stdc++.h>                         
using namespace std;
typedef tuple<int, int, int> iii;
int main() {
    multiset<iii> birthdays;                       
    birthdays.emplace(5, 24, -1980);               
    birthdays.emplace(5, 24, -1982);               
    birthdays.emplace(11, 13, -1983);              
    birthdays.emplace(5, 24, -1982);               
    for (auto &[mm, dd, yyyy] : birthdays)         
        printf("%d %d %d\n", dd, mm, -yyyy);
}