#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int pc,pr;
        cin>>pc>>pr;

         int sum=0,i,j;
        i=ceil(1.0*pc/9);
        j=ceil(1.0*pr/9);
        if(i<j){
            cout<<"0"<<" "<<i<<endl;
        }
        else{
            cout<<"1"<<" "<<j<<endl;
        }

    }
    return 0;
}
