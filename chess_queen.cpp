#include<iostream>
using namespace std;


bool isSafe(int board[4][4],int i,int j,int n){

    // horizontally
    for(int k=0;k<n;k++){
        if(board[i][j]==1){
            return false;
        }
    }

    //vertically
    for(int k=0;k<n;k++){
        if (board[k][j]==1){
            return false;
        }
    }

    //diagonally
    int x=i,y=j;
    while(x>=0 and y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }

    x=i,y=j;
    while(x>=0 and y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
}


bool check_queen(int board[4][4],int i,int n){
    //base
    if(i==n){
       for (int l=0;l<n;l++){
            for(int k=0;k<n;k++){
                cout<<board[k][l]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
            return false;
        }
    


    //recursive
    for(int j=0;j<n;j++){
        bool kyaSafeHai=  isSafe(board,i,j,n);
        if (kyaSafeHai==true){
            board[i][j]=1;
            bool baakiplace=check_queen(board,i+1,n);
            if (baakiplace==true){
                 return true;
                }    
                board[i][j]=0;    
            }
        }
    return false;
}


int main(){
    
    int board[4][4]={0};
    check_queen(board,0,4);

return 0;
}