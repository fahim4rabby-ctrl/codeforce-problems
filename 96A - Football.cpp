#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string tim;
    cin>>tim;
    int a_count=0,b_count=0;
    for(int i=0;i<tim.size()-1;i++){
        if(tim[i]=='0'&&tim[i+1]=='0'){
            a_count++;
        }else if(tim[i+1]=='1'&&a_count<6){
            a_count=0;
        }
    }    for(int i=0;i<tim.size()-1;i++){
        if(tim[i]=='1'&&tim[i+1]=='1'){
            b_count++;
        }else if(tim[i+1]=='0'&&b_count<6){
            b_count=0;
        }
    }
    if(a_count>5||b_count>5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
