#include<iostream>
#include<bits/stdc++.h>
using namespace std;

            //datatype refrence_to_vector
int display(vector<int> &v){

    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    //vector <datatype> name_of_vector
    vector<int> vect;//inititialize vector
    int items, size;
    cout<<"Enter vector size"<<endl;
    cin>>size;
    for (int i=0;i<size;i++){
        cout<<"Enter number of elements? "<<endl;
        cin>>items;
        vect.push_back(items);
        

        
    }
    //vect.pop_back();
    //display(vect);
    // datatype  scope_resolution itiratir_should_point_at_begning
    vector<int> :: iterator iter = vect.begin();
    vect.insert(iter+1,90,999);
    display(vect);
    


    return 0;
}