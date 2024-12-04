#include<iostream>
#include<cstring>
using namespace std;
void parenthesis(char str[],int index,int open,int close,int n){
	//base
	if(index== 2*n){
	str[index]='\0';
	// cout<<str<<"\n";
	return;
	}

	//recursive
	if(open<n){
		str[index]='(';
		parenthesis(str,index+1,open+1,close,n);
	}

	if(close<open){
		str[index]=')';
		parenthesis(str,index+1,open,close+1,n);
	}


}
int main() {
	int n;
	cin>>n;

	char str[2*n+1];
	parenthesis(str,0,0,0,n);
	return 0;
}