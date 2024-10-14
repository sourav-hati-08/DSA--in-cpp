#include<iostream>
using namespace std;


// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 


int main(){

    int a;
    cout<<"Enter your number :";
    cin>>a;
    int i = 1;
    while (i<=a)
    {
        int j=1;
        while (j<=a)
        {
           cout<<j<<" ";
           j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
}
