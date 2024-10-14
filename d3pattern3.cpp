#include<iostream>
using namespace std;


// 1 1 1 1
// 2 2 2
// 3 3 
// 4

int main(){

    int a;
    cout<<"Enter your number :";
    cin>>a;
    int i = 1;
    while (i<=a)
    {
        int j=i;
        while (j<=a)
        {
           cout<<i<<" ";
           j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
}
