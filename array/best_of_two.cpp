#include<bits/stdc++.h>
using namespace std;

int main(){
  
	    int a,b,c,d,e,f;
	    cin>>a>>b>>c>>d>>e>>f;
	    set <int>s{a,b,c};
	    set <int>a{d,e,f};

        int n = s.size();
        cout<<s;


        // if((max_a-max_c)>(max_b-max_d)){
        //     cout<<"alcie"<<endl;
        // }else if((max_a-max_c)==(max_b-max_d)){
        //     cout<<"tie"<<endl;
        // }else if((max_a-max_c)<(max_b-max_d)){
        //     cout<<"bob"<<endl;
        // }


    return 0;
}