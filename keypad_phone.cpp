#include<iostream>
using namespace std;

string keys[10]={
    "",
    "",
    "abc",
    "def",
    "ghi",
    "jlk",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"
};

void poss_case(char* in,char* out,int i,int j){
    //base
    if (in[i]='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    //recursive
    int idx=in[i]-'0';  //as we have strings   //idx is for selecting which string and k is for selecting element of chosen string
    for(int k=0;keys[idx][k]!='\0';k++){
        out[j]=keys[idx][k];
        poss_case(in,out,i+1,j+1);
    }
}

int main(){
    char in[10]="23";
    char out[10];
   poss_case(in,out,0,0);

return 0;
}
