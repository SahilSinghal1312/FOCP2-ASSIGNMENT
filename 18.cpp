#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cout<<"enter string:";
    cin>>s;
    n=s.length();
    int flag=1;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            flag=0;
        }
    }
    if(flag==1)
    cout<<"palindrome string";
    else cout<<"not a palindrome string";
    return 0;
}