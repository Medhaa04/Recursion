#include<iostream>
using namespace std;
int fib(int n){
    //base
    if(n==0 || n==1){
        return n;
    }

    //recursive case
    int fact1=fib(n-1);
    int fact2=fib(n-2);
    int fib_sum=fact1+fact2;
    return fib_sum;
}
int main(){
    int n=5;
    cout<<fib(5);

    return 0;
}