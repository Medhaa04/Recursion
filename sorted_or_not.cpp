#include<iostream>
using namespace std;
bool checksorted(int *arr, int n){
    //base case
    if(n==0 || n==1){
        return true;
    }
    //recursive
    bool chota_ans=checksorted(arr+1,n-1);  //as we check if array from second element is sorted ans since we leave the first term we are left with n-1 elements
    if(arr[0]<=arr[1] and chota_ans==true ){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool issorted=checksorted(arr,n);
    if (issorted==true){
        cout<<"The array is sorted"<<endl;
    }
    else{
        cout<<"The array is not sorted"<<endl;
    }

return 0;
}