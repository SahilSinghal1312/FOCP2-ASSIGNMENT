#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    

    for(int i=n1;i<=n2;i++){
        int flag=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
         if(flag==1){
        cout<<i<<endl;
    }   
    }
    return 0;
}