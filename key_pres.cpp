#include<iostream>
using namespace std;
int key_pres(int *arr,int i,int n){
    //base
    if(i==n){
        return false;
    
    }
    if(arr[i]==7){
        return true;
    }
     //recursive
    bool ans=key_pres(arr,i+1,n);
    return ans;

}
int main(){
    int arr[]={1,3,5,7,9};
    int n=sizeof(arr)/sizeof(int);
    key_pres(arr,0,n);
    bool ans=key_pres(arr,0,n);
    if(ans==true){
        cout<<"7 present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }

return 0;
} 