#include <iostream>
#include <cmath>

using namespace std;
#define endl '\n'

const int MAX = 2005;

unsigned long long int f[MAX] = {0};

unsigned long long int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);

    if (f[n])
        return f[n];

    int k = (n & 1)? (n+1)/2 : n/2;

    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
                  : (2*fib(k-1) + fib(k))*fib(k);

    return f[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n < 3) {
        cout << n;
    } else {
        cout << fib(n + 1);
    }

    return 0;
}