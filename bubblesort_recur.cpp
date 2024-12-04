#include<iostream>
using namespace std;
int bubble_sort(int *arr,int n){
    if(n==1){
        return 1;
    }
for(int i=0;i<n-1;i++){
    // for(int j=0;j<n-i-1;j++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
  bubble_sort(arr,n-1);
//   }
}
}

void print_arr(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[]={1,3,7,6,2,5,4};
    int n=sizeof(arr)/sizeof(int);
    cout<<bubble_sort(arr,n);
    print_arr(arr,n);

return 0;
}