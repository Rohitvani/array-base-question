// Find the second largest element in the given Array in one pass.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,4,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    int max=0;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<max<<endl;
    int second=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && second<arr[i]) second=arr[i];
    }
    cout<<second;
}