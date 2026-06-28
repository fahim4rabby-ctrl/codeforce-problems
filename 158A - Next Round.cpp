#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n],unit=0,target;
    for(int i=1;i<=n;i++)
        cin>>arr[i-1];
    target=arr[k-1];
    for(int i=1;i<=n;i++){
        if(arr[i-1]>=target&&arr[i-1]>0)
            unit++;
    }
    cout<<unit<<endl;
    return 0;
}
