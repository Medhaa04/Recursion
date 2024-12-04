#include <iostream>
#include <string>
using namespace std;


void generateStrings(const string& digits, int index, string current, const char mapping[]) {
    // Base case: If we have processed all digits, print the current string
    if (index == digits.length()) {
        cout << current << endl;
        return;
    }
    
    // Get the current digit and its corresponding character from the mapping
    int digit = digits[index] - '0';
    char ch = mapping[digit];

    // Include the current character in the current string and move to the next digit
    generateStrings(digits, index + 1, current + ch, mapping);

    // If there are two digits remaining and the current digit is not 0, and the combined value is <= 26
    if (index + 1 < digits.length() && digit != 0) {
        int nextDigit = digits[index + 1] - '0';
        int combinedValue = digit * 10 + nextDigit;
        if (combinedValue <= 26) {
            char combinedCh = mapping[combinedValue];
            generateStrings(digits, index + 2, current + combinedCh, mapping);
        }
    }
}

int main() {
    char mapping[27];
    for (int i = 1; i <= 26; ++i) {
        mapping[i] = 'A' + i - 1;
    }
    
    string digits;
    // cout << "Enter the number: ";
    cin >> digits;

    generateStrings(digits, 0, "", mapping);

    return 0;
}
