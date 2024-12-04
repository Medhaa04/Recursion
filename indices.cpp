#include<iostream>
using namespace std;
void indices(int *arr,int n,int key,int i){
    //base
    if(i>n){
        return ;
    }

    if(arr[i]==key){
        cout<<i<<" ";
    }

    //recursive
    indices(arr,n,key,i+1);
}
int main(){
    int n;
    int arr[100];
    int key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;

    indices(arr,n,key,0);
    

return 0;
}