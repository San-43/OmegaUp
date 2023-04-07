#include <bits/stdc++.h>

using namespace std;

char ganador(const char (*board)[3]) {

    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return board[i][0];
        }
    }

    for (int j = 0; j < 3; j++) {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
            return board[0][j];
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return board[0][0];
    }

    return board[0][2];
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    char board[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> board[i][j];
        }
    }

    cout << ganador(board);

    return 0;
}