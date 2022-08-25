/*written by anuj*/
//printing reverse and actual reverse of the number
#include<iostream>
using namespace std;

void numberReverse(int a){
    int num;
    while(a>0){
        num=a%10;
        cout<<num;
        a/=10;
    }
}

void actualReverse(int a){
    int num,sum=0;
    while(a>0){
        num=a%10;
        sum*=10;
        sum+=num;
        a/=10;
    }
    cout<<sum;
}

int main(){
    int n,b;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"-------MENU------- \n1.Print just the visual reverse \n2.Print actual reverse \n3.Exit"<<endl;
    cout<<"\nEnter choice: ";
    cin>>b;
    switch(b){
        case 1:
        cout<<"|_";
        numberReverse(n); 
        cout<<"_|"<<endl;
        break;

        case 2:
        cout<<"|_";
        actualReverse(n); 
        cout<<"_|"<<endl;
        break;

        case 3:
        cout<<"-----EXITING-----";
        exit(0);

        default :
        cout<<"******ERROR******"<<endl;
        cout<<"Enter a valid option"<<endl;
    }
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}