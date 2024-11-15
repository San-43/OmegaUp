#include <bits/stdc++.h>

using namespace std;

void expand(const string &s, int l, int r, set<string> &palindromos) {
    int n = s.size();
    while (l >= 0 && r < n && s[l] == s[r]) {
        palindromos.insert(s.substr(l, r - l + 1));
        l--;
        r++;
    }
}

int count(int n, const string &s) {
    set<string> palindromos;

    for (int i = 0; i < n; i++) {
        expand(s, i, i, palindromos);
        expand(s, i, i + 1, palindromos);
    }

    return palindromos.size();
}

int main() {
    int n;
    string s;

    cin >> n;
    cin >> s;

    cout << count(n, s) << endl;

    return 0;
}
