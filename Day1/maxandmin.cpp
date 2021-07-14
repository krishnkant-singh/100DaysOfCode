#include<iostream>
using namespace std;
int maxandmin(int arr[],int n){
    int i , j=0,k,l,p=19999999,a;
    for(i=0;i<n-1;i++){
        if(arr[0]>arr[i+1]){
            k=arr[0];
            arr[0]=arr[i+1];
            arr[i+1]=k;


        }
        else
        { if((arr[i+1]-arr[0])>j)
            j=(arr[i+1]-arr[0]);
            a=min(p,arr[0]);
            p=arr[0];
            l=arr[i+1];


        }

    }
    cout<<"minimum is"<<p;
    cout<<"maximum is"<<l;
    return 0;


}
int main(){
    int i,j,k,n;
    cout<<"enter size of an array";
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    maxandmin(arr,n);
    return 0;
}
