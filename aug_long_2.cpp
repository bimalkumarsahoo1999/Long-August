#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=-1,turns=-1;
        for(int i:a){
            if(k%i==0){
                ans=max(i,ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
