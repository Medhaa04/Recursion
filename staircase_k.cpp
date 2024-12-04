#include<iostream>
using namespace std;
int f(int n,int k){
    int stairn=0;int way;
    //base 
    if(n<0){
        return 0;
    }

    if(n==0){
        return 1;
    }

    //recursive
    for(int i=1;i<=k;i++){
        way=f(n-i,k);
        stairn=stairn+way;
    }
    return stairn;

}
int main(){
    int n;int k;
    cout<<"Enter staircase step:"<<endl;
    cin>>n;
    cout<<"Atmost number of jumps:"<<endl;
    cin>>k;
    cout<<f(n,k);


return 0;
}