#include <iostream>
using namespace std;
 int path[10][10]={0};
// const int N = 100;
// const int M = 100;

bool isSafe(int grid[][5], int x, int y, int N, int M) {
    return x >= 0 && x < N && y >= 0 && y < M && grid[x][y] == 1;
}

bool findPath(int grid[][5], int x, int y, int N, int M) {
    // Base case: Reached the destination
    if (x == N - 1 && y == M - 1) {
        path[x][y] = 1;
        return true;
    }

    if (isSafe(grid, x, y, N, M)) {
        path[x][y] = 1;  // Mark the current cell as part of the path

        // Move right
        if (findPath(grid, x, y + 1, N, M)) {
            return true;
        }

        // Move down
        if (findPath(grid, x + 1, y, N, M)) {
            return true;
        }

        // If neither right nor down leads to the destination, backtrack
        path[x][y] = 0;
        return false;
    }

    return false;
}

int main() {
    int N, M;
    cout << "Enter the number of rows (N): ";
    cin >> N;
    cout << "Enter the number of columns (M): ";
    cin >> M;

    int grid[N][M];
    cout << "Enter the grid (0 for blocked, 1 for empty):" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> grid[i][j];
        }
    }

    int path[N][M] = {0}; // To store the path

    if (findPath(grid, 0, 0, N, M)) {
        cout << "Path found:" << endl;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cout << path[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No path found." << endl;
    }

    return 0;
}
