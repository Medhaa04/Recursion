#include <iostream>
using namespace std;

// Recursive function to print numbers in lexicographical order
//base
void printLexicographical(int current, int N) {
    if (current > N) {
        return;
    }

    cout << current << " ";
    for(int i=0;i<10;++i){
        if(current*10+i<=N && current*10+i != 0){
             printLexicographical(current * 10+i, N);

        }
    }
    
}

int main() {
    int N;
    
    cin >> N;

    
    printLexicographical(0, N);

    return 0;
}
