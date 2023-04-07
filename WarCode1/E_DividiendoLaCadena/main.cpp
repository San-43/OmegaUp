#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    string S;

    cin >> S;
    int n = S.size();

    int right_count = 0;
    vector<int> freq(26, 0);
    for (int i = 0; i < n; ++i) {
        ++freq[S[i] - 'a'];

        if (freq[S[i] - 'a'] == 1)
            ++right_count;
    }

    vector<int> left_freq(26, 0);

    int max_sum = 0;
    int left_count = 0;
    for (int i = 0; i < n; ++i) {
        --freq[S[i] - 'a'];
        ++left_freq[S[i] - 'a'];

        if (left_freq[S[i] - 'a'] == 1)
            ++left_count;

        if (freq[S[i] - 'a'] == 0)
            --right_count;

        max_sum = max(max_sum, right_count + left_count);
    }

    cout << max_sum << endl;

    return 0;
}
