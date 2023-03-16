#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

long long int cars[100005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int m;
    cin >> m >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> cars[i];
        cars[i] += cars[i - 1];
    }

    for (int i = 0; i < m; ++i) {
        int gasoline;
        cin >> gasoline;
        int min = 1;
        int max = n;
        int index = 0;

        while (min <= max) {
            int guess =(max + min) / 2;
            if (cars[guess] <= gasoline) {
                index = guess;
                min = guess + 1;
            }else {
                max = guess - 1;
            }
        }
        cout << index << " " << gasoline - cars[index] << endl;
    }
    return 0;
}