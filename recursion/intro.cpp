#include<iostream>
using namespace std;


//basic recursion
void  fun1(){
    cout<<"fun1 \n";
}
void fun2(){
        cout<<"Before fun2 \n";
        fun1();
        cout<<"After fun2 \n";

}

int main(){
    cout<<"Before fun2 \n";
    fun2();
    cout<<"After fun2 \n";
    return 0;
}

