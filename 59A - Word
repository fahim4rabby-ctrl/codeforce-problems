#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int upper=0,lower=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z')
            upper++;
        else
            lower++;
    }for(int i=0;i<s.length();i++){
        if(upper>lower)
            cout<<(char)toupper(s[i]);
        else
            cout<<(char)tolower(s[i]);
    }
 
    return 0;
}
