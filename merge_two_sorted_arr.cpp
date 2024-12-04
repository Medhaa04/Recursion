#include<iostream>
using namespace std;
// int merge_sort(int *arr1,int *arr2){
//     int i,j,k=0;
//int arr3[];
//     // for(int i=0;i<n1;i++){
//     //     for(int j=0;j<n2;j++){
//     //         if(arr1[])
//     //     }
//     // }
//     while(i<n1 || j<n2)
// }
int main(){
    int a[]={1,3,4,7};
    int n1=sizeof(a)/sizeof(int);
    int b[]={2,3,5,9,11};
    int n2=sizeof(b)/sizeof(int);
    int c[20];
    int i=0,j=0,k=0;
    while(i<n1 and j<n2){
    if(a[i]<b[j]){
        c[k]=a[i];
        k++;
        i++;
    }
    else{
        c[k]=b[j];
        k++;j++;
    }
    }
    while(j<n2){
        c[k]=b[j];
        k++;
        j++;
    }
    while(i<n2){
        c[k]=b[i];
        k++;
        i++;
    }

    for(int m=0;m<k;m++){
        cout<<c[m]<<" ";
    }
}