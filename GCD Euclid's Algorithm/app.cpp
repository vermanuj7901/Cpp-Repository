/*written by anuj*/
#include<iostream>
using namespace std;

long long gcd(long long a, long long b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main(){
    long long a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD of "<<a<< " & "<<b<<" is: |_"<<gcd(a,b)<<"_|"<<endl;
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}