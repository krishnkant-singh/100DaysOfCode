#include<iostream>
#include<iomanip>
using namespace std;
int kthm(int arr[],int n,int k){
    int i, j,temp,counter=0;
    for(i=1;i<n;i++){
        j=i-1;
        temp=arr[i];
        counter =counter+1;

        while(j>=0 && temp<arr[j]){
            arr[j]=arr[j+1];
            j=j-1;

        }
        arr[j+1]=temp;


    }
    for(i=0;i<n;i++){
        if(k==i){
            cout<<arr[i];
        }
    }


return 0;



}

int main(){
    int i,j,k,n;
    cout<<"enter size of an array";
    cin>>n;
    cout<<"en";
    cin>>k;
    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    kthm(arr,n,k);
    return 0;
}