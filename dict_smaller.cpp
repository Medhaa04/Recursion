#include <iostream>
#include <string>
using namespace std;

// Function to swap two characters in a string
void swapChars(string& str, int i, int j) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

// Recursive function to generate permutations and print smaller words
void generateSmallerWords(string str, string current, bool used[], int index) {
    if (index == str.length()) {
        if (current < str) {
            cout << current << endl;
        }
        return;
    }

    for (int i = 0; i < str.length(); ++i) {
        if (!used[i]) {
            used[i] = true;
            generateSmallerWords(str, current + str[i], used, index + 1);
            used[i] = false;
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    bool used[10] = {0}; // Assuming the maximum length of input string is 10
    generateSmallerWords(input, "", used, 0);

    return 0;
}
