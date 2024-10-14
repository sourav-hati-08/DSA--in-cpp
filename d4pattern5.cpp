#include<iostream>
using namespace std;


// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1


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
           cout<<a-j+1<<" ";
           j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
}
