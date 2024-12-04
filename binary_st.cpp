#include <iostream>
#include <cstring>
using namespace std;

// Recursive function to generate binary strings
void generateBinaryStrings(char *str, int index) {
    if (index == strlen(str)) {
        cout << str << " ";
        return;
    }

    if (str[index] == '?') {
        str[index] = '0';
        generateBinaryStrings(str, index + 1);

        str[index] = '1';
        generateBinaryStrings(str, index + 1);

        // Reset the character to '?' for backtracking
        str[index] = '?';
    } else {
        generateBinaryStrings(str, index + 1);
    }
}

int main() {
    int n;
    cin>>n;
    char input[100];
    for(int i=0;i<n;i++){
    cin.getline(input,100);
    generateBinaryStrings(input, 0);
    }
    

    return 0;
}
