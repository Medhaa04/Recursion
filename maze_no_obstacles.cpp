#include<iostream>
using namespace std;

int ans[10][10]={0};

int total_ways(int i,int j){
    //base
    if(i==1 || j==1){
        return 1;
    }

    //recursive
    int way1=total_ways(i,j-1);
    int way2=total_ways(i-1,j);
    return way1+way2;

    //for n,n we need sum of ways from i-1,j and i,j-1
    //from i-1,j we need sum of i-2,j and i-1,j-1
    //recursive
    //f(n,n)=f(n-1,n)+f(n,n-1)



}
int main(){
    int n;
    cin>>n;

        cout<<total_ways(n,n);

return 0;
}