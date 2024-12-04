#include<iostream>
#include<cmath>
using namespace std;

bool safe ( int board[9][9] , int i , int j , int n , int number ){

    //vertically
    for (int k=0 ; k<n ; k++){
        if (board[i][k] == number){
            return false;
        }
    }

    //horizontally
    for (int k=0 ; k<n ; k++){
        if (board[k][i] == number){
            return false;
        }
    }

    int si = (1/3) * 3;
    int sj = (1/3) * 3;
    for(int l=si;l<si+3;l++){
        for(int r=sj;r<sj+3;r++){
            if(board[l][r]==number){
                return false;
            }
        }
    }
return false;
}



bool sudoku (int board[9][9] , int i , int j , int n){

    //base
    if(i == n){
        for(int l = 0 ; l < n ; l++){
            for(int k = 0 ; k < n ; k++){
                cout<<board[l][k]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

//recursive
    if(j==n){
        return sudoku(board,i+1,0,n);
        }
        if(board[i][j] != 0){
            return sudoku(board , i , j + 1 , n);
            }
    for (int number = 1 ; number <= n ; number ++){
        bool KyaRakhSakteHai=safe(board , i , j , n , number);
        if(KyaRakhSakteHai == true){
            board[i][j] = number;
            bool aageSolveHua = sudoku(board , i , j + 1 , n);
            if(aageSolveHua==true){
                return true;
            } 
        board[i][j]=0;
        }
    }

return false;
}



int main(){

   int board[9][9]={
     {6,0,0,1,9,5,0,0,0},
     {0,9,8,0,0,0,0,6,0},
     {8,0,0,0,6,0,0,0,3},
     {4,0,0,8,0,3,0,0,1},
     {7,0,0,0,2,0,0,0,6},
     {0,6,0,0,0,0,2,8,0},
     {0,0,0,4,1,9,0,0,5},
     {0,0,0,0,8,0,0,7,9}
    };

    sudoku(board,0,0,9);
    
return 0;
}