//written by anuj

//Given a positive integer N, count all possible distinct binary strings of length N such that there are no consecutive 1’s.

#include<bits/stdc++.h>
using namespace std ;

int getNoOfBinaryStrings(int n){
    if(n==1){
        return 2;
    }
    else{
        return ((n-1)+getNoOfBinaryStrings(n-1));
    }
}

int main(){
    int n;
    cout<<"Enter value of N: ";
    cin>>n;
    cout<<"The number of strings are: |_"<<getNoOfBinaryStrings(n)<<"_|"<<endl;
    cout<<"\nThank You for using the application (Written by ANUJ VERMA) "<<endl;
    return 0;
}
