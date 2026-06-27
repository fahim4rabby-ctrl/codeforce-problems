#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int A=0,D=0;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A')
            A++;
        else if(s[i]=='D')
            D++;
    }
    if(A>D)
        cout<<"Anton"<<endl;
    else if(A==D)
        cout<<"Friendship"<<endl;
    else
        cout<<"Danik"<<endl;
    return 0;
}
