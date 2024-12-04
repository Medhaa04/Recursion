#include <iostream>
using namespace std;

void generateSubsets(int arr[], int n, bool chosen[], int index) {
    if (index == n) {
        cout << "{ ";
        for (int i = 0; i < n; ++i) {
            if (chosen[i]) {
                cout << arr[i] << " ";
            }
        }
        std::cout << "}\n";
        return;
    }

    chosen[index] = true;
    generateSubsets(arr, n, chosen, index + 1);

    chosen[index] = false;
    generateSubsets(arr, n, chosen, index + 1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bool chosen[n] = {false};
    generateSubsets(arr, n, chosen, 0);

    return 0;
}