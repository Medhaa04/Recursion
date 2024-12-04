#include<iostream>
#include<cstring>
using namespace std;
void replace_pi(char str[],int index){
    //base
    if(str[index]=='\0' || str[index+1]=='\0'){
        return;
    }

    //recursive
    if(str[index]=='p' && str[index+1]=='i'){   
        int i;
        for(i=strlen(str);i>=index+2;--i){
            str[i+2]=str[i];

        }
        str[index]='3';
        str[index+1]='.';
        str[index+2]='1';
        str[index+3]='4';

        replace_pi(str,index+4);
    }
    else{
        replace_pi(str,index+1);
    }
}
int main(){
    int n;
    cin>>n;
    char str[100];
    for(int i=0;i<n;i++){
    
    cin>>str;
    replace_pi(str,0);
    cout<<str;
    
    
    }
   

return 0;
}