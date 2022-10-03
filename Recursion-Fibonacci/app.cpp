//written by anuj
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Fibonacci term at the index "<<n<<" is: "<<fib(n);
    cout<<"\nThank You for using the application (Written by ANUJ VERMA) "<<endl;
}
