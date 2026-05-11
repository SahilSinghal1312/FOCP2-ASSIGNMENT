#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"number:";
    cin>>number;
//     if(number>=90){
//         cout<<"grade is A\n";
//     }
//         else if(number<=90 && number>=70){
//             cout<<"grade is B\n";
//         }
//         else{
//             cout<<"grade is C\n";
//         }
//         return 0;
//     }
switch(number/10){
    case 10:cout<<"grade is A++\n";break;
    case 9: cout<<"grade is A\n";break;
    case 8: cout<<"grade is b\n";break;
    case 7: cout<<"grade is c\n";break;
    case 6: cout<<"grade is d\n";break;
    default: cout<<"grade is f\n";break;

}
return 0;
}
