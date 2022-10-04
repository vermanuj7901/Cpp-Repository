#include<bits/stdc++.h>
using namespace std;

int C(int n, int k) {
   int sum = 0;
   if(k==0){
       return 1;
   }
   else if(n==k){
       return 1;
   }
   else{
       sum += C(n-1,k-1) + C(n-1,k);
        return sum;
   }
}

int main(){
    int n, k;
    cout<<"Enter the value of N and K for the calculation of NCK: ";
    cin>>n>>k;
    cout<<"The answer is: "<<endl;
    cout<<"|_"<<C(n,k)<<"_|"<<endl;
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)."<<endl;
    return 0;
}