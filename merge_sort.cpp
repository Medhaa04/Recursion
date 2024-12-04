#include<iostream>
using namespace std;
int merge(int *a,int *b,int *c,int s,int e){
    int m= (s+e)/2;
    int i=s,j=m+1;
    int k=s;

    while (i<=m and j<=e){
        if(b[i]<c[j]){
            a[k]=b[i];
            k++;
            i++;
        }
        else{
            a[k]=c[j];
            k++;
            j++;
        }
    }

    while(i<=m){
        a[k]=b[i];
        k++;
        i++;
    }

    while(j<=e){
        a[k]=c[j];
        k++;
        j++;
    }

    for(int p=0;p<k;p++){
        cout<<c[p]<<" ";
    }

}


void MergeSort(int *a,int s,int e){
    //base
    if(s>=e){
        return ;
    }

    //recursive
    int m=(s+e)/2;              //breaking array into 2
    int b[10];
    int c[10];
    
    for(int i=s;i<=m;i++){
        b[i]=a[i];
    }

    for(int i=m+1;i<=e;i++){
        c[i]=a[i];
    }
    
    MergeSort(b,s,m);                  //calling function again i.e recursion so as to break the array again
    MergeSort(c,m+1,e);

    merge(a,b,c,s,e);
}


int main(){
    int a[]={8,7,1,9};
    int n=sizeof(a)/sizeof(int);
    MergeSort(a,0,n-1);

return 0;
}