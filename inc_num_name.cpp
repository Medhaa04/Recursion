#include<iostream>
using namespace std;


string ar[10]={
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine"
};
void print_numname(int num){
    if (num==0){
        return;
    }
    print_numname(num/10);
    cout<<ar[num%10]<<" ";

}



int main(){
    int num;int i;int ar;
    cin>>num;
    print_numname(num);
    
}

