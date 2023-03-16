#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    unsigned long long int num;
    cin >> num;
    double A = sqrt(2 * num + 0.25) - 0.5;
    unsigned long long int B = A;

    if (B != A)
        cout << "NO ES TRIANGULAR";
    else
        cout << B;
}
