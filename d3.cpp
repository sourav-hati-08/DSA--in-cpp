#include<iostream>
using namespace std;

// A is positive , negative or zero 
int main(){

    int a;
    cout<<"Enter your number :";
    cin>>a;
    if(a>0){
        cout<<"A is positive"<<endl;
    }
    else if (a<0)
    {
        cout<< "A is negative"<<endl;
    }
    else{
        cout<<"A equal to Zero ."<<endl;
    }

}