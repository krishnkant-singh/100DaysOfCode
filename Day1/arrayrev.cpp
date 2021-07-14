#include<iostream>
using namespace std;
int reverse(int arr[],int n)
{
    int i ,j,k;
    for(i=n-1;i>0;i--){
        cout<<arr[i];


    }
    return 0;
}

int main(){
    int i,j,k,n;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"enter"<<i+1<<"th element";
        cin>>arr[i];

    }
    reverse(arr,n);
    return 0;
}