#include<bits/stdc++.h>
using namespace std;
int s;
vector<int> f(int x,int*a,int i,int fsf){
    if(i==s){
        return vector<int>(fsf);
    }
    vector<int> ans;
    if(x==a[i]){
        ans=f(x,a,i+1,fsf+1);
        ans[fsf]=i;
    }
    else{
        ans=f(x,a,i+1,fsf);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    s=n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    vector<int>ans=f(x,a,0,0);
    for(int i:ans){
        cout<<i<<endl;
    }
    return 0;
}
