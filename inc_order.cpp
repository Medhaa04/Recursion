#include<iostream>   
using namespace std;
void print_increasing(int n){
    //base
    if(n==0){
        return;
    }
    //recursive
   print_increasing(n-1);
    cout<<n<<endl;
}
 
int main(){
    int n;
    cin>>n;
    print_increasing(n);
    return 0;
}
