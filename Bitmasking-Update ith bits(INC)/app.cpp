//wrong answer
//written by anuj
#include<bits/stdc++.h>
using namespace std;

int setIthBits(int n, int i){
    int mask = (1<<i);
    n = n|mask;
    return n;
}

int clearIthBits(int n, int i){
    int mask = ~(1<<i);
    n = n&mask;
    return n;
}

void updateIthBits1st(int &n, int i, int v){
    clearIthBits(n, i);
    int mask = (v<<i);
    n = n|mask;
    cout<<"\nYour answer is: "<<n<<endl;
}

void updateIthBits2nd(int &n, int i, int v){
    setIthBits(n, i);
    int mask = ~(v<<i);
    n = n&mask;
    cout<<"\nYour answer is: "<<n<<endl;
}

int main(){
    int n, i, v;
    cout<<"Enter your number and the value of i: ";
    cin>>n>>i;
    cout<<"Enter the change (0 or 1): ";
    cin>>v;
    if(v==0){
        updateIthBits2nd(n, i, v);
    }
    else{
        updateIthBits1st(n, i, v);
    }
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)"<<endl;
}