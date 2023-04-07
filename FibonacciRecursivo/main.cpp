#include <iostream>

using namespace std;
int count = 0;

unsigned long long int fib(int n) {
    count++;
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else {
      return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int n;
    cin >> n;
    std::cout << fib(n) << " " << count;
    return 0;
}
