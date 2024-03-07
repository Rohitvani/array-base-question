// Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,1,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int dupli=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]) flag=true;
        }
    }
    if(flag==true) cout<<"duplicate";
    else cout<<"not";

    
}