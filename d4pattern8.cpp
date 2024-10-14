#include<iostream>
using namespace std;


// *
// * *
// * * *
// * * * *

int main(){

    int a;
    cout<<"Enter your number :";
    cin>>a;
    int row = 1;
    while (row<=a)
    {
        int col=1;
        while (col<=row)
        {
           cout<<col<<" ";
           col = col +1;
        }
        cout<<endl;
        row = row+1;
        
    }
}