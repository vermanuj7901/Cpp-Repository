/*written by anuj*/
#include<iostream>
using namespace std;

void starPattern(int a){
    for(int i=1; i<=a; i++){
        for(int j=(a-i); j>0; j--){
            cout<<" ";
        }
        for(int k=(2*i-1); k>0; k--){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    starPattern(n);
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
}