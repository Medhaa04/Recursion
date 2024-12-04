#include<iostream>
using namespace std;
int f(int n){
    //base
    if(n<0){
        return 0;
    }
    
    if(n==0){
        return 1;
    }
    
    //recursive
    int stair1=f(n-1);
    int stair2=f(n-2);
    int stairn=stair1+stair2;
    return stairn;

}
int main(){
    int n;
    cout<<"Enter staircase step:"<<endl;
    cin>>n;
    cout<<f(n);
return 0;
}