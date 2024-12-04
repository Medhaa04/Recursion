#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    int chotaAns=fact(n-1);
    int badaAns=n*chotaAns;
    return badaAns;
}
int main(){
    int n=4;
    cout<<fact(4);

    return 0;
}