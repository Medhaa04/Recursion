#include <iostream>
using namespace std;

int stringToInt(char *str) {
    // Base case: reached the end of the string
    if (*str == '\0') {
        return 0;
    }

    int digit = *str - '0';  // Convert character to integer
     int remainingValue = stringToInt(str + 1); // Recursive call

    return digit + remainingValue * 10;
}

int main() {
    char str[100];
    cout << "Enter a number in string form: ";
    cin >> str;

    int result = stringToInt(str, 0);
    cout << "Converted integer value: " << result << endl;

    return 0;
}
    