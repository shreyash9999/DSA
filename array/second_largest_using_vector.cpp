#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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