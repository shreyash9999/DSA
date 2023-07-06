#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    //add elements in vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    //ele can be accesed like an ordinary array
    cout<<v[0]<<endl;

    //another awy to create avector is to give the list of elememts
    vector<int >a={10,20,30,40,50};

    //we can also gice the number of ele and their initial values
    vector<int >b(8);//size=8 and inital value =0;
    vector<int>c (8,0);//size=8 and initial value =2;
    //output: c= 0 0 0 0 0 0 0 0//so basically we got 8 places in c=vector and each place has inital value "0"


    //we can iterate through vector as that of array
    //but as in vector we have a shorter way;
    for(auto x:c){
        cout<<x<<" ";
    }
    a.back();//return last element
    a.pop_back();//removes last ele
    

    return 0;
}