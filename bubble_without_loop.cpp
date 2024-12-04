#include<iostream>
using namespace std;
void bubble_sort(int *arr,int i,int j,int n){
    if(1==n-1){
        return ;
    }
    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
    if(j<n-1){
        bubble_sort(a,i,j+1,n);
    }
    else{
        bubble_sort(a,i+1,0,n)
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
    cout<<bubble_sort(arr,0,0,n);
    print_arr(arr,n);

return 0;
}