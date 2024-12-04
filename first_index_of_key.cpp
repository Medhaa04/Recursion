#include<iostream>
using namespace std;
int find_index(int *arr,int i,int n){
    //base
   
    if(arr[i]==7){
        return i;
    }
    //recursive
    int ans=find_index(arr,i+1,n);
    return ans;


}
int main(){
    int arr[]={1,4,2,6,3,7,7,8};
    int n=sizeof(arr)/sizeof(int);
    cout<<find_index(arr,0,n);


return 0;
}