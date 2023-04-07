#include <iostream>
#include <string>

int get_grade(const std::string& s, int& pos) {
    int sum = 0;
    int count = 0;
    while (pos < s.size() && s[pos] != ')') {
        if (std::isdigit(s[pos])) {
            sum += s[pos++] - '0';
            count++;
        } else {
            pos++;
            sum += get_grade(s, pos);
            count++;
        }
    }
    pos++;
    return sum / count;
}

int main() {
    std::string s;
    std::cin >> s;
    int pos = 0;
    std::cout << get_grade(s, pos) << std::endl;
    return 0;
}
