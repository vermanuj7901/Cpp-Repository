/*written by anuj*/
#include<iostream>
using namespace std;

void abcPattern(int a){
    for(int i=a; i>0; i--){
        for(int j=65; j<65+i; j++){
            char c=j;
            cout<<c;
        }
        for(int j=65+i-1; j>=65; j--){
            char c=j;
            cout<<c;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    abcPattern(n);
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
}