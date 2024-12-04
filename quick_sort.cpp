#include<iostream>
using namespace std;

int PivotPoint(int *a,int s,int e){
    int i=s-1;
    for(int j=s;j<=e;j++){
        if(a[e]>=a[j]){
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[e],a[i+1]);
    return i+1;
}


void QuickSort(int *a,int s,int e){
    //base
    if(s>=e){
        return;
    }

    //recursive
    int p = PivotPoint(a,s,e);
    QuickSort(a,s,p-1);
    QuickSort(a,p+1,e);

}

int main(){
    int a[] = {2,8,5,1,7,3,4};
    int n = sizeof(a)/sizeof(int);
    QuickSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

return 0;
}
