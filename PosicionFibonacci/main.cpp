#include <iostream>

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

    unsigned long long int n;
    cin >> n;
    unsigned long long n2 = 1;
    int count = 1;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    } else if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    bool isFound = false;

    while (n2 <= n) {
        if (n2 == n) {
            isFound = true;
            break;
        }
        count++;
        n2 = fib(count);
    }

    if (isFound) {
        cout << count << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
