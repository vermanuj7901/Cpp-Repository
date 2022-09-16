//written by anuj
#include<bits/stdc++.h>
using namespace std;

void setIthBits(int n, int i){
    int mask = (1<<i);
    n = n|mask;
    cout<<"\nYour answer is: "<<n<<endl;
}

int main(){
    int n, i;
    cout<<"Enter your number and the value of i: ";
    cin>>n>>i;
    setIthBits(n, i);
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)"<<endl;
}