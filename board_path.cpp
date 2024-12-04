#include <iostream>
using namespace std;

int countWays(int curr, int end, int m) {
    // Base case: reached the end
    if (curr == end) {
        return 1;
    }

    int ways = 0;
    for (int i = 1; i <= m; ++i) {
        if (curr + i <= end) {
            ways += countWays(curr + i, end, m);
        }
    }

    return ways;
}


void printPaths(int curr, int end, int m, string path) {
    // Base case: reached the end
    if (curr == end) {
        cout << path << endl;
        return;
    }

    for (int i = 1; i <= m; ++i) {
        if (curr + i <= end) {
            printPaths(curr + i, end, m, path + to_string(i) + " ");
        }
    }
}




int main() {
    int N, M;
    // cout << "Enter the size of the board (N): ";
    cin >> N;
    // cout << "Enter the number of faces of the dice (M): ";
    cin >> M;

    int result = countWays(0, N, M);
    cout << "Different ways the board can be traveled: " << result << endl;
    cout << "Valid paths:" << endl;
    printPaths(0, N, M, "");


    return 0;
}
