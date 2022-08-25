/*written by anuj*/
#include<iostream>
using namespace std;



int main(){
    int a,x,y,z;
    char ch;
    cout<<"Enter your Character: ";
    ch = cin.get();

    if(ch>='A' && ch<='Z'){
        cout<<"Capital Letter"<<endl;
    }
    else if(ch>='a' && ch<='z'){
        cout<<"Normal Letter"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Digit"<<endl;
    }
    else if(ch==' ' || ch=='\n'){
        cout<<"Whitesapce"<<endl;
    }
    else{
        cout<<"Special Characters"<<endl;
    }

    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}