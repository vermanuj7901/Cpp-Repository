/*written by anuj*/
#include<iostream>
using namespace std;

int squareRoot(int n){
    int num = n/2 + 1;
    for(int i=0; i<num; i++){
        if(n==1){
            return 1;
        }
        else if(i*i==n){
            return i;
        }
    }
    return -1;
}

int main(){
    int a,x,y,z;
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    int sol = squareRoot(n);
    if(sol!=-1){
        cout<<"\nThe square root of "<<n<<" is "<<sol<<endl;    
    }
    else{
        cout<<"\n******ERROR******"<<endl;
    }
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}