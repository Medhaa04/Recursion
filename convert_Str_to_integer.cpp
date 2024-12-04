#include<iostream>
#include<cstring>
using namespace std;
int str_to_int(char *s,int i,int n){
    //base
    if(n==-1){
        return 0;
    }
//    int x=str_to_int(s1[1])
//    int y=s1[0]-'0';
    //recursive
  int rec_ans=str_to_int(s,i,n-1);
  int final_ans=rec_ans*10+(s[n]-'0');

}



int main(){
  char s[]="1234";
    // str_to_int(s1)
    cout<<str_to_int(s,0,3);

return 0;
}