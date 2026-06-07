#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int Acnt=0,Bcnt=0;
    int A=0,B=n-1;
    int Asum=0,Bsum=0;
    while(A<=B){
        if(Asum<=Bsum){
            Asum+=arr[A++];
            Acnt++;
        }else{
            Bsum+=arr[B--];
            Bcnt++;
        }
    }
    cout<<Acnt<<" "<<Bcnt<<endl;
    return 0;
}
