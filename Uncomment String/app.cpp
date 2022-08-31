//written by anuj
#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    int index1 = s.find("/*");
    int index2 = s.find("*/");
    string st = s.substr(index1+2 , index2-index1-2);       
    return st;
}

int main(){
    string s;
    cout<<"Enter your string (including comments): "<<endl;
    getline(cin, s);
    
    cout<<"\nCommented string is: "<<endl;
    cout<<solve(s);
    
    cout<<endl;
    cout<<"\n------Thank You for using the application (Written by ANUJ VERMA)------"<<endl;
    return 0;
}