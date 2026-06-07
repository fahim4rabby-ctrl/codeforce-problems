#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int even=0;
    int odd=0;
    int temp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    if(odd>even){
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                temp=i+1;
            }
        }
    }else{
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                temp=i+1;
            }
    }
    }
    cout<<temp<<endl;
    return 0;
}
