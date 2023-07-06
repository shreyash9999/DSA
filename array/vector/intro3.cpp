#include<bits/stdc++.h>
using namespace std;

int main(){
    //itiration and ranges
    //begin() = point to element in data structure
    //end() = points out the dsa

    vector <int> v={1,5,3,6,3,8,0};
    sort(v.begin(),v.end());//sort the vector
    reverse(v.begin(),v.end());//reverse
    random_shuffle(v.begin(),v.end());//reandom shuffle

    //print 1st ele of vector
    cout<<*v.begin()<<endl;//the * is important
    
    



    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}