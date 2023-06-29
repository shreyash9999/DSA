#include<iostream>
#include<bits/stdc++.h>
using namespace std;


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