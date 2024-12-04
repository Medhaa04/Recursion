#include<iostream>
using namespace std;

int ans[10][10]={0};

bool RatInMaze(char maze[][5],int i,int j,int n,int m){
    
    //base
    if(i==n-1 and j==m-1){
        ans[i][j]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            cout<<ans[i][j];
        }
        cout<<endl; 
        } 
        return true; 
        }   
         /*for printing all possible ways after 
          cout<<endl
          }
          cout<<endl;
          return false;*/                                                                                                 
     
     
    //recursive
    ans[i][j]=1;

    if(j+1<m and maze[i][j]!='X'){
        bool RightSeAnswerKya=RatInMaze(maze,i,j+1,n,m);
        if(RightSeAnswerKya==true){
            return true;
        }
    }

    if(i+1<n and maze[i+1][j]!='X'){
        bool NeecheSeAnswerKya=RatInMaze(maze,i+1,j,n,m);
        if(NeecheSeAnswerKya==true){
            return true;
        }
    }

    ans[i][j]=0;
    return false;
    

}
int main(){

    char maze[][5]={
    "0000",
    "00XX",
    "0000",
    "XX00"
};

cout<<RatInMaze(maze,0,0,4,4);

return 0;
}