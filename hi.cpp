#include<iostream>
#include<cstring>
using namespace std;
int count(char st[],int i=0){
    //base
    if(i>=strlen(st)-1){
        return 0;
    }

    //recursive
    if(strncmp(st+i,"hi",2)==0){
        return 1+count(st,i+2);

    }
    return count(st,i+1);
}

void remove(char st[],int read=0,int write=0){
    //base
    if(st[read]=='\0'){
        st[write]='\0';
        return;
    }

    //recursive
    if(strncmp(st+read,"hi",2)==0){
        remove(st,read+2,write);
    }
    else{
        st[write]=st[read];
        remove(st,read+1,write+1);
    }
}

void replace(char st[],int read=0,int write=0){
    //base
    if(st[read]=='\0'){
        st[write]='\0';
        return;

    }

    //recursive
    if(strncmp(st+read,"hi",2)==0){
        st[write]='b';
        st[write+1]='y';
        st[write+2]='e';
        replace(st,read+2,write+3);
        }

    else{
        st[write]=st[read];
        replace(st,read+1,write+1);

    }


    
}

int main(){
    char  st[100];
    cin.getline(st,100);
    cout<<count(st)<<endl;
    remove(st);
    cout<<st<<endl;
    replace(st);
    cout<<st<<endl;

   


return 0;
}