#include <iostream>

using namespace std;

bool isPa(string s) {
    if (s.length() == 0 || s.length() == 1) {
        return true;
    }
    if (s[0] != s[s.length() - 1])
        return false;
    return isPa(s.substr(1,s.length()-2));
}

int main() {
    string s;
    cin >> s;
    if (isPa(s))
        cout << "Si";
    else
        cout << "No";
    return 0;
}


