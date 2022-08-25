/*written by anuj*/
#include<iostream>
using namespace std;

void factorial(int n){
    int num=1;
    for(int i=1; i<=n; i++){
        num*=i;
    }
    cout<<"|_"<<num<<"_|"<<endl;
}

int main(){
    int a;
    cout<<"Enter your number: ";
    cin>>a;
    factorial(a);
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
}