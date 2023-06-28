#include<iostream>
using namespace std;

//find the greatest element in array
int largest(int arr[],int n){
    int res = arr[0];
    for(int i= 1; i < n;i++)
        if (arr[i] > res)
            res = arr[i];
        
    return res;

}
// int largest(int arr[], int n)
// {
//     int i;
//     int max = arr[0];
//     for (i = 1; i < n; i++)
//         if (arr[i] > max)
//             max = arr[i];
 
//     return max;
// }

int x;

int secondlargest(int arr[],int n){
    int res = -1,largest  =0;
    for (int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res= largest;
            largest = i;
        }
        else if (arr[i]!= arr[largest]){
            if(res==-1 || arr[i]>arr[res]){
                res = i;
            }
        }
        return res;
    }
}

int main(){
    int arr[] = {2,34,54,22,32};
    int n= sizeof(arr)/sizeof (arr[0]);
    cout<<largest(arr, n)<<endl;
    cout<<secondlargest(arr,n);
    return 0;
}