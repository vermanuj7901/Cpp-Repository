/*written by anuj*/
#include<iostream>
using namespace std;

void numberPattern(int n){
    int num=0;
    for(int i=0; i<2*n-1; i++){
        cout<<"-";
    }
    for(int i=0; i<=n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int k=0; k<i; k++){
            num++;
            cout<<num;
        }
        for(int l=0; l<i-1; l++){
            num--;
            cout<<num;
        }
        cout<<endl;
    }
    for(int i=0; i<2*n-1; i++){
        cout<<"-";
    }
}

int main(){
    int a;
    cout<<"Enter your number: ";
    cin>>a;
    numberPattern(a);
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
}