#include<iostream>
#include<cstring>
using namespace std;
void remove_duplicate(char str[]){
    int length=strlen(str);
    int index=0;
    bool present[256]={false};

    for( int i=0;i<length;++i){
        if(!present[str[i]]){
            present[str[i]]=true;
            str[index++]=str[i];
        }
    }
    str[index]='\0';
}
// void invert(char str[]){
//     int length=strlen(str);
//     for(int i=0;i<length;i++){
        
//     }

// }
int main(){
    char str[100];
    cin.getline(str,100);
    remove_duplicate(str);
    cout<<str;

return 0;
}