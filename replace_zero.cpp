#include <iostream>
using namespace std;

int convertZerosToFives(int num) {
    // Base case
    if (num == 0) {
        return 0; // Return 0 as there are no more digits left
    }

    // Recursive case
    int lastDigit = num % 10;
    if (lastDigit == 0) {
        lastDigit = 5; // Replace 0 with 5
    }

    return convertZerosToFives(num / 10) * 10 + lastDigit;
}

int main() {
    int N;
    // cout << "Enter an integer N: ";
    cin >> N;

    int result = convertZerosToFives(N);
    cout << /*"After converting zeros to fives: " <<*/ result << endl;

    return 0;
}
