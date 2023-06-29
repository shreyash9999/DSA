#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverse(int arr[],int n){
    int low=0,high =n-1;
    while(low<high){
        int temp = arr[low];
        arr[low]=arr[high];
        arr[high]= temp;
        low++;
        high--;
    }
}//implement the function (currently:not)

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n =sizeof(arr)/sizeof(arr[0]);
    //cout<<reverse(arr,n)<<endl;

    reverse(arr,arr + n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}