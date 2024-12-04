#include<iostream>
using namespace std;
int last_index(int *arr,int n,int key,int index){
	//base
	if(index<0){
		return -1;
	}

	if(arr[index]==key){
		return index;
	}

	//recursive
	int ans=last_index(arr,n,key,index-1);
	return ans;

}
int main() {
	int n;int arr[100];
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}

	int key;
	cin>>key;

	int last=last_index(arr,n,key,n-1);
	cout<<last;
	return 0;
}