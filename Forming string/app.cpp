


//incorrect solution....



//written by anuj
#include<bits/stdc++.h>
using namespace std;

int canBeFormedOrNot(string s1, string s2) {
    int ini = 0;
    for(int i=0; i<s2.length(); i++){
        for(int j=0; j<s1.length(); j++){
            if(s2[i]==s1[j]){
                ini++;
                continue;
            }
        }
    }
    if(ini==s2.length()){
        return 1;
    }
    else{
        return 0;
    } 
}

int main(){
    string s1, s2;
    cout<<"Enter your strings: "<<endl;
    cin>>s1>>s2;

    int a = canBeFormedOrNot(s1, s2);
    if(a==1){
        cout<<"String can be formed"<<endl;
    }
    else{
        cout<<"String cannot be formed"<<endl;
    }
    
    cout<<"\n------Thank You for using the application (Written by ANUJ VERMA)------"<<endl;
    return 0;
}