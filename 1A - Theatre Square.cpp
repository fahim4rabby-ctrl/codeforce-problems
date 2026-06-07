#include<iostream>
using namespace std;
int main(){
    int l,b,a;
    cin>>l>>b>>a;
    long long int l_c,b_c;
    if(l%a==0){
        l_c=l/a;
    }else{
        l_c=((l+a-1)/a);
    }
    if(b%a==0){
        b_c=b/a;
    }else{
        b_c=((b+a-1)/a);
    }
    long long int ans=l_c*b_c;
    cout<<ans<<endl;
    return 0;
}
