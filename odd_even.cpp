#include<iostream>
using namespace std;
void decreasing(int n){
    //base
    if(n<0){
        return;
    }

    //recursive
    if(n%2 !=0){
        cout<<n<<endl;
    }
    decreasing(n-1);
}

void increasing(int n,int i=2){
    
    //base
    if(i>n){
        return;
    }

    //recursive
    if(i%2==0){
        cout<<i<<endl;
    

    }
    increasing(n,i+1);

}

int main(){

int n;
cin>>n;
decreasing(n);
increasing(n);
return 0;
}