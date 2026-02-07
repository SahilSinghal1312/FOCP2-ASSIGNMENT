#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n=0;
    int num,originalnum,remainder,result1=0,result2=0;
    cout<<"enter a number:";
    cin>>num;
    
    originalnum=num; 
    
    while(originalnum!=0){
        originalnum/=10;
        ++n;
    }

    originalnum=num;

    while(originalnum!=0){
        remainder=originalnum%10;
        result1+=pow(remainder,n);
        originalnum/=10;
    }
    if(result1==num){
        cout<<"armstrong number";
    }
    else{
        cout<<"not armstrong";
    }
for(int i=1;i<num/2;i++){
    if(num%i==0)
    result2+=i;
}

if(result2==num){
    cout<<"perfect number";
}
else{
    cout<<"not a perfect number";
}
return 0;
}