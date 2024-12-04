#include<iostream>
using namespace std;
void generatePaths(int row, int col, int N1, int N2, string path) {
    // Base case: reached bottom-right corner
    if (row == N1 - 1 && col == N2 - 1) {
        cout << path << " ";
        // cout<<"\n";
        return;
    }

    // Recursive case: move right (if within bounds)
    if (col + 1 < N2) {
        generatePaths(row, col + 1, N1, N2, path + "H");
    }

    // Recursive case: move down (if within bounds)
    if (row + 1 < N1) {
        generatePaths(row + 1, col, N1, N2, path + "V");
    }
}





int num_mazePath(int n,int m){
    //base
    if(n==1 || m==1){
        return 1;
    }

    //recursive
    int way1=num_mazePath(n-1,m);
    int way2=num_mazePath(n,m-1);
    return way1+way2;
}
int main(){
    int n;
    cin>>n;

    int m;
    cin>>m;
    
    generatePaths(0,0,n,m,"");
    cout<<"\n";
    cout<<num_mazePath(n,m)<<endl;
    return 0;

}