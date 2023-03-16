#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

const int board[8][8] = {{0, 1, 0, 1, 0, 1, 0, 1},
                         {1, 0, 1, 0, 1, 0, 1, 0},
                         {0, 1, 0, 1, 0, 1, 0, 1},
                         {1, 0, 1, 0, 1, 0, 1, 0},
                         {0, 1, 0, 1, 0, 1, 0, 1},
                         {1, 0, 1, 0, 1, 0, 1, 0},
                         {0, 1, 0, 1, 0, 1, 0, 1},
                         {1, 0, 1, 0, 1, 0, 1, 0},};

map<char, int> letras = {{'a', 7},
                         {'b', 6},
                         {'c', 5},
                         {'d', 4},
                         {'e', 3},
                         {'f', 2},
                         {'g', 1},
                         {'h', 0},};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char c;
    int x;
    cin >> c >> x;
    if (board[x - 1][letras[c]] == 1) {
        cout << "NEGRO" << endl;
    } else {
        cout << "BLANCO" << endl;
    }
    return 0;
}
