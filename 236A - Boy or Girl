#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string name;
    int count=0;
    cin>>name;
    for(int i=0;i<name.size();i++){
        bool found=false;
        for(int j=0;j<i;j++){
            if(name[j]==name[i]){
                found=true;
                break;
            }
        }
 
        if(!found){
            count++;
        }
    }
    if(count%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
