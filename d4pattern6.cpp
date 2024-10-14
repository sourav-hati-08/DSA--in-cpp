#include<iostream>
using namespace std;


// 1 2 3
// 4 5 6
// 7 8 9


int main(){

    int a;
    cout<<"Enter your number :";
    cin>>a;
    int i = 1;
    int count = 1;
    while (i<=a)
    {
        int j=1;
        while (j<=a)
        {
           cout<<count<<" ";
           count = count + 1;
           j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
}
