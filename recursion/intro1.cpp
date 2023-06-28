#include<iostream>
using namespace std;

//direct and indirect recursion

void fun(){
    cout<<"GFG"<<endl;
    fun();
}

int main(){
    fun();
    return 0;
}

//it will just go on printing GFG,...
//and will give "segmentaion fault" onces the memory is full
