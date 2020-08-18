#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,p;
        cin>>s>>p;
        unordered_map<char,int> ms,mp;

    for(char i:s){
        ms[i]++;
    }
    for(char i:p){
        ms[i]--;
        mp[i]++;
    }
    s="";
    for(auto i:ms){
        while(i.second>0){
        s+=i.first;
        i.second--;
        }
    }
    sort(s.begin(),s.end());

    char key=p[0];
    string sub="";


    int j,l=1;
    for(int i=1;i<p.size();i++){
        if(p[i]<p[i-1]){
            break;
        }
        else if(p[i-1]<p[i]){
            l=0;
            break;
        }
    }
        for(j=0;j<s.size();j++){
            if(l==1){
                if(s[j]>=key){

                    break;
                }
            }
            else{
                    if(s[j]>key){
                        break;
                    }

            }
        }
    cout<<j<<endl;
        sub=s.substr(0,j);
        s=s.substr(j);
        string ans=sub+p+s;
        cout<<ans<<endl;
    }
    return 0;
}
