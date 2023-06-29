#include<iostream>
#include<bits/stdc++.h>
using namespace std;

	int print2largest(int arr[], int n) {
	    // code here
        // vector<int> v(begin(arr),end(arr));
        vector<int> v;
        v.assign(arr,arr+n);
        
        set<int> s(v.begin(),v.end());
        
        v.clear();
        
        for (auto it:s) v.push_back(it);
        int a = v.size();
        
        if(v[a-2]==0){
            return -1;
        }else{
            return v[a-2];
        };
	}//if array is given then you have to convert it to vector then set then empty v then add in v then -2 by size

int main(){
    vector<int> v{2,43,54,67,21,90};

    set<int> s(v.begin(),v.end());//set has property to arange element in assendong order
    v.clear();

    for (auto it:s)v.push_back(it);

    int n=v.size();
    cout<<"Second Element: "<<endl;
    cout<<v[n-2];
    return 0;
}