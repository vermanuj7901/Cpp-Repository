/*written by anuj*/
#include<iostream>
using namespace std;

void greatestCommonDivisor(int n, int m){
    int hcf;
    int min, max;
    if(n>m){
        min=m;
        max=n;
    }
    else{
        max=m;
        min=n;
    }
    for(int i=1; i<=min; i++){
        if(m%i==0 && n%i==0){
            hcf=i;
        }
    }
    cout<<"|_"<<hcf<<"_|"<<endl;
}

int main(){
    int a,b,x,y,z;
    cout<<"Enter your numbers: ";
    cin>>a>>b;
    greatestCommonDivisor(a,b);
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
}