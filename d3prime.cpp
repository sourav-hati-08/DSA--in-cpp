#include<iostream>
using namespace std;


int main(){

    int a;
    cout<<"Enter your number :";
    cin>>a;
    int i=2;

    while(i<a){
        if (a%i==0)
        {
            cout<<"Not prime"<<endl;
        }
        else{
            cout<<"Prime"<<endl;
        }
        i=i+1;  
    }
}




// good version 

// #include <iostream>
// using namespace std;

// int main() {
//     int a;
//     cout << "Enter your number :";
//     cin >> a;

//     bool isPrime = true;

//     if (a <= 1) {
//         isPrime = false;  // 1 and numbers less than 1 are not prime
//     } else {
//         for (int i = 2; i <= a / 2; i++) {
//             if (a % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }

//     if (isPrime) {
//         cout << "Prime" << endl;
//     } else {
//         cout << "Not prime" << endl;
//     }

//     return 0;
// }