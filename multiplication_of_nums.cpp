#include<iostream>
using namespace std;
int product(int n,int m){
    //base
    if(n==0 || m==0){
        return 0;
    }
    // if(m==1)
    //recursive
    int ans1=product(n,m-1);
    int ans=n+ans1;
    return ans;


}
int main(){
    int n,m;
    cout<<"Enter first num:";
    cin>>n;
    cout<<"Enter second num:";
    cin>>m;
    cout<<product(n,m);

return 0;
}