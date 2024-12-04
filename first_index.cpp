#include<iostream>
using namespace std;
int first_index(int *arr,int i,int n,int target){
	//base
	if(i>=n){
		return -1;
	}
	if(arr[i]==target){
		return i;
	}

	//recur
	int ans=first_index(arr,i+1,n,target);
	return ans;

}
int main() {
	int n,target;
	int arr[50];

	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cin>>target;
	

	cout<<first_index(arr,0,n,target);
	return 0;
}