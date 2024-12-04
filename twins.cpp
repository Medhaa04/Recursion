#include <iostream>
#include <string>
using namespace std;

// Recursive function to count twins in a string
int countTwins(const string& str, int index) {
    if (index >= str.length() - 2) {
        return 0;
    }

    int count = 0;
    if (str[index] == str[index + 2]) {
        count = 1 + countTwins(str, index + 1);
    } else {
        count = countTwins(str, index + 1);
    }

    return count;
}

int main() {
    char str[100];
    cin.getline(str,100);
    // cout << "Enter a string: ";
    

    int twinCount = countTwins(str, 0);
    cout << /*"Number of twins: " << */twinCount << endl;

    return 0;
}
