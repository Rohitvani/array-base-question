// Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int a=1;
    for(int i=0;i<n;i++){
        a=a*arr[i];
    }
    cout<<a;
}