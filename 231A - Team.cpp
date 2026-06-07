#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    } for(int i=0;i<n;i++){
        if((arr[i][0]+arr[i][1]+arr[i][2])>1){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
