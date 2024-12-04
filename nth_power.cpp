#include<iostream>
#include<math.h>
using namespace std;
int nthpow(int x,int n){
    //base
    if(n==0){
        return 1;
    }
//    int n=pow(n,0)=1;
    //recursive
    int chotaprblm=nthpow(x,n-1);
    int badaprblm=x*chotaprblm;
    return badaprblm;

}
int main(){
    int x,n;
    cin>>x;
    cin>>n;
    cout<<nthpow(x,n);

    return 0;
}