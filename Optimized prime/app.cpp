/*written by anuj*/
//optimised way to see if the number is prime or not
#include<iostream>
using namespace std;

bool optimisedPrime(int n){
    if(n==0 || n==1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a;
    cout<<"Enter your number: ";
    cin>>a;
    cout<<( optimisedPrime(a) ? "|_Prime_|" : "|_Non-Prime_|" );
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
}