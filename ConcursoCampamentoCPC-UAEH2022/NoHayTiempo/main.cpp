#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int min_movimientos(string palabra1, string palabra2) {
    int movimientos = 0;
    for (int i = 0; i < palabra1.length(); i++) {
        int dist = abs(palabra1[i] - palabra2[i]);
        movimientos += min(dist, 26 - dist);
    }
    return movimientos;
}

int main() {
    string palabra1;
    string palabra2;
    cin >> palabra1 >> palabra2;
    cout << min_movimientos(palabra1, palabra2) << endl;
    return 0;
}