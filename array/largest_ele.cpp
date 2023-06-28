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



int secondlargest(int arr[],int n){
    int first = 0,second  =-1;
    for (int i=1;i<n;i++){
        if(arr[i]>arr[first]){
            second= first;
            first = i;
        }
        else if (arr[i]!= arr[first]){
            if(second==-1 || arr[second]<arr[i]){
                second = i;
            }
        }
    }return arr[second];
}

int main(){
    int arr[] = {2,34,54,22,32};
    int n= sizeof(arr)/sizeof (arr[0]);
    cout<<largest(arr, n)<<endl;
    cout<<secondlargest(arr,n);
    return 0;
}

