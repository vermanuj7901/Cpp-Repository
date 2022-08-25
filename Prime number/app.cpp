/*written by anuj*/
#include<iostream>
using namespace std;

void primeNumber(int a){
    for(int i=2; i<a; i++){
        if(a%i==0){
            cout<<a<<" is NOT PRIME"<<endl;
            break;
        }
        else{
            cout<<a<<" is PRIME"<<endl;
            break;
        }
    }
    if(a==2){
        cout<<"2 is PRIME"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    primeNumber(n);
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}