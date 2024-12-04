#include <iostream>
#include <cstring>
using namespace std;

void generateParentheses(char current[], int index, int open, int close, int n) {
    if (index == 2 * n) {
        current[index] = '\0';
        cout << current << "\n";
        return;
    }

    if (open < n) {
        current[index] = '(';
        generateParentheses(current, index + 1, open + 1, close, n);
    }

    if (close < open) {
        current[index] = ')';
        generateParentheses(current, index + 1, open, close + 1, n);
    }
}

int main() {
    int n;
    
    cin >> n;

    char current[2 * n + 1]; // +1 for the null-terminator
    generateParentheses(current, 0, 0, 0, n);

    return 0;
}
