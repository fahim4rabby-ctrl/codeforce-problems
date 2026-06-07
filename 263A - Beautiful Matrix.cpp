#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    int a,b,a_count=0,b_count=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                    a=i;
                    b=j;
               }
            }
        }
        while(a!=2){
            if(a>2){
                a--;
                a_count++;
            }else if(a<2){
                a++;
                a_count++;
            }
        }while(b!=2){
            if(b>2){
                b--;
                b_count++;
            }else if(b<2){
                b++;
                b_count++;
            }
        }
        int count=a_count+b_count;
        cout<<count<<endl;
    return 0;
}
