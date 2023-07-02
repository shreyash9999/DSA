#include<bits/stdc++.h>
using namespace std;


int rm_dup(int arr[],int n){
    vector<int> v;
    v.assign(arr,arr+n);

    set<int> s(v.begin(),v.end());
    for(auto it:s)cout<<it<<" ";
    cout<<endl;
    cout<<s.size();
}

int main(){
    int arr[]={10,20,20,30,30,30};
    int n = sizeof(arr)/sizeof(arr[0]);

    rm_dup(arr,n);
    return 0;
}