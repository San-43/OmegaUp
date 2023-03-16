#include <iostream>

using namespace std;
#define endl '\n'

int field[1002][1002];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int q;
    int x;
    int y;
    cin >> n;
    cin >> q;
    for (int i = 1; i <= n; ++i) {
        cin >> x >> y;
        field[x + 1][y + 1] = 1;
    }

    for (int i = 1; i <= 1001; ++i) {
        for (int j = 1; j <= 1001; ++j) {
            field[i][j] += field[i][j - 1] + field[i - 1][j] - field[i - 1][j - 1];
        }
    }

    for (int i = 0; i < q; ++i) {
        cin >> x >> y;
        x++;
        y++;

        if ((field[x][y] - field[x][y - 1] - field[x - 1][y] + field[x - 1][y - 1]) > 0) {
            cout << 0 << endl;
            continue;
        }

        int result = 0;
        int ini = 1;
        int end = 1001;
        while (ini <= end) {
            int guess = (ini + end) >> 1;

            int x2 = min(1001, x + guess);
            int y2 = min(1001, y + guess);
            int x1 = max(1, x - guess);
            int y1 = max(1, y - guess);

            if ((field[x2][y2] - field[x2][y1 - 1] - field[x1 - 1][y2] + field[x1 - 1][y1 - 1]) > 0) {
                end = guess - 1;
                result = guess;
            } else {
                ini = guess + 1;
            }
        }

        cout << result << endl;
    }
    return 0;
}
