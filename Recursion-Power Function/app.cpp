//written by anuj
#include<bits/stdc++.h>
using namespace std;

int pow(int a, int b){
    int ans = 1;
    if(b==1){
        return a;
    }
    else if(b==0){
        return 1;
    }
    else{
        ans = a*(pow(a, b-1));
    }
    return ans;
}

int main(){
    int a, b;
    cout<<"Enter base and exponent: ";
    cin>>a>>b;
    cout<<"Your answer is: |_"<<pow(a, b)<<"_|"<<endl;
    cout<<"\nThank You for using the application (Written by ANUJ VERMA) "<<endl;
    return 0;
}
