#include<iostream>
using namespace std;

int nth_triangle(int n){
	//base
	if(n==1){
		return 1;
	}

	//recursive
	int ans=n+nth_triangle(n-1);
	return ans;
}
int main() {
	int n;
	cin>>n;

	cout<<nth_triangle(n);
	return 0;
}